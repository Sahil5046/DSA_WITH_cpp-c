#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void create(int a[], int n)
{
    node *p, *last;
    head = new node;
    head->data = a[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        node *t = new node;
        t->data = a[i];
        last->next = t;
        t->next = NULL;
        last = t;
    }
}

void Delete(node *p, int pos)
{
    node *q;
    int x;
    if (pos == 0)
    {
        q = head;
        head = head->next;
        x = q->data;
        delete q;
    }
    else
    {
        node *q = NULL;

        for (int i = 0; i < pos; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        p->next = NULL;
        x = p->data;
        delete p;
    }
    cout << "The deleted value is : " << x << endl;
}

void display(node *p)
{
    while (p != NULL)
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

    int pos;
    cout << "Enter the position : " << endl;
    cin >> pos;

    create(a, n);

    Delete(head, pos);

    display(head);
}