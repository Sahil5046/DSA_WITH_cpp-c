#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void create(int a[], int n)
{
    node *last, *p;
    head = new node;
    head->data = a[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        node *t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    last->next = head;
}

int insert(node *p, int val, int pos)
{
    if (pos == 0)
    {
        node *t = new node;
        t->data = val;
        t->next = head;

        while (p->next != head)
        {
            p = p->next;
        }

        p->next = t;

        head = t;
    }

    else
    {
        node *t = new node;
        

        for(int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        t->data = val;
        t->next = NULL;
        t->next = p->next;
        p->next = t;
    }
}

void display(node *p)
{
    static int flag = 0;

    if(flag == 0 || p != head)
    {
        flag = 1;
        cout << p->data << " ";
        display(p->next);
    }
    flag = 0;
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

    int val, pos;
    cin >> val >> pos;

    create(a, n);

    insert(head, val, pos);

    display(head);
}