#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int front;
    int rear;
    int size;
    int *a;
};

void enqueue(Queue *q, int val)
{
    if (q->rear == q->size - 1)
    {
        cout << "Queue is full." << endl;
    }
    else
    {
        q->rear++;
        q->a[q->rear] = val;
    }
}

int dequeue(Queue *q)
{

    int ele = -1;

    if (q->front == q->rear)
    {
        cout << "Queue is underflow." << endl;
        // q->front = q->rear = -1;
    }
    else
    {
        q->front++;
        ele = q->a[q->front];
        if(q->front == q->rear)
        {
            q->front = q->rear = -1 ;
        }
        // delete q.front;
    }
    return ele;
}

bool isEmpty(Queue *q)
{
    if (q->front == q->rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(Queue *q)
{
    if (q->rear == q->size - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Queue q;

    cout << "Enter the size  of the array : ";
    cin >> q.size;

    q.a = new int[q.size];

    // initialize front and rear to -1
    q.front = q.rear = -1;

    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 4);

    cout << isFull(&q) << endl;

    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;
    // cout << dequeue(&q) << endl;


    cout << isEmpty(&q) << endl;

    cout << isFull(&q) << endl;

}