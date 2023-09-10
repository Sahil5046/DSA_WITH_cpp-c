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
    node *p, *last;
    head = new node;
    head->next = NULL;
    head->prev = NULL;
    head->data = a[0];
    last = head;

    for (int i = 1; i < n; i++)
    {
        node *t = new node;
        t->data = a[i];
        t->prev = last;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Delete(struct node *p, int ele, int pos)
{
    node *t = new node;
    int x;

    if (pos == 0)
    {
        head = head->next;
        // p->next->prev = NULL;

        x = p->data;
        
        delete p;

        if (head != NULL)
        {
            head->prev = NULL;
        }

        p->next = NULL;
    }
    else
    {
        for (int i = 1; i != pos; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;

        if (p->next != NULL)
        {
            p->next = p->prev;
        }
        x = p->data;
        delete p;
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

    int pos, ele;

    cout << "enter the element : ";
    cin >> ele;
    cout << "enter the position : ";
    cin >> pos;

    Delete(head, ele, pos);

    display(head);
}