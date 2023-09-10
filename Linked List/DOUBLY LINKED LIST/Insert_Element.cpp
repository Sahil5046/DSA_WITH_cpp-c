#include <bits/stdc++.h>
using namespace std;

struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *head = NULL;

void create(int a[], int n)
{
    node *last, *p;
    head = new node;
    head->prev = NULL;
    head->data = a[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        node *p = new node;
        p->prev = last;
        p->data = a[i];
        p->next = NULL;
        last->next = p;
        last = p;
    }
}

void insert(struct node *p, int ele, int pos)
{
    node *t = new node;
    if (pos == 0)
    {
        t->prev = NULL;
        t->data = ele;
        t->next = head;
        head->prev = t;
    }
    else
    {
        t->data = ele;

        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }

        t->next = p->next;
        t->prev = p;

        if (p->next != NULL)
        {
            p->next->prev = t;
        }

        p->next = t;
    }
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

    create(a, n);

    int key, pos;
    cout << "Enter the element : ";
    cin >> key;

    cout << "Enter the position : ";
    cin >> pos;

    insert(head, key, pos);

    display(head);
}