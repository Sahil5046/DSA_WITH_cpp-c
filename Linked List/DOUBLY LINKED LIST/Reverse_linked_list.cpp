#include <bits/stdc++.h>
using namespace std;

struct node 
{
    struct node *prev;
    int data;
    struct node *next;
}*head = NULL;

void create(int a[], int n)
{
    struct node *last, *p;
    head = new node;
    head->prev = NULL;
    head->data = a[0];
    head->next = NULL;
    last = head;

    for(int i = 1; i < n; i++)
    {
        node *t = new node;
        t->prev = last;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}

void Reverse(node *p)
{
    node *temp;
    while(p != NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;

        if(p != NULL && p->next == NULL)
        {
            head = p;
        }
    }
}

void display(node *p)
{
    while(p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    create(a, n);

    Reverse(head);

    display(head);
}