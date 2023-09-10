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

    // Create a loop for testing
    last->next = head->next;
}

int isLoop(node *p)
{
    node *q = p = head;

    do
    {
        p = p->next;
        q = q->next;
        q = (q != NULL) ? q->next : NULL;
        if (p == q)
        {
            break;
        }
    } while (p != NULL && q != NULL);

    return (p == q) ? true : false;
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

    // head->next->next->next->next = head->next;

    int k = isLoop(head);

    if (!k)
    {
        cout << "this is linear linked list" << endl;
    }
    else
    {
        cout << "this linked list has loop" << endl;
    }
}