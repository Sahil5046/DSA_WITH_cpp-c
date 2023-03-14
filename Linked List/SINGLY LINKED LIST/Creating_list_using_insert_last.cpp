#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL;

// void create(int a[], int n)
// {
//     struct node *t, *last;

//     head = new node;
//     head->data = a[0];
//     head->next = NULL;
//     head = last;

//     for (int i = 1; i < n; i++)
//     {
//         t = new node;
//         t->data = a[i];
//         t->next = NULL;
//         last = t;
//     }
// }

void insertlast(int val)
{
    node *last;
    node *p = new node;
    p->data = val;
    p->next = NULL;

    if(head == NULL)
    {
        head = last = p;
    }
    else
    {
        last->next = p;
        last = p;
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
    // int n;
    // cin >> n;
    // int a[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }

    // int val;
    // cin >> val;

    // create(a, n);
    insertlast(5);
    insertlast(6);
    insertlast(9);
    insertlast(7);
    display(head);
}