#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
} *front = NULL, *rear = NULL;

void enqueue(int val)
{
    node *temp = new node;
    // front = rear = temp;
    temp->data = val;
    temp->next = NULL;

    if (front == NULL && rear == NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue()
{
    int x = -1;

    if (front == rear)
    {
        cout << "Queue is underflow." << endl;
    }
    else
    {
        x = front->data;
        node *p = front;
        front = front->next;
        delete p;
    }
    cout << "Removed value is : " << x << endl;
}

int peek()
{
    if (front == NULL)
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        return front->data;
    }
}

void display()
{
    node *p = front;

    if (front == NULL)
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();

    cout << "Now the top element is : " << peek() << endl;
}