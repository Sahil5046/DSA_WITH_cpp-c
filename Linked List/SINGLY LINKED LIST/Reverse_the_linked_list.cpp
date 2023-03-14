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
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// int countNode(node *p)
// {
//     int count = 0;

//     while(p != NULL)
//     {
//         count++;
//         p = p->next;
//     }
//     return count;
// }

// void rev()    //This is the simple approach.
// {
//     node *p = head;
//     int i = 0;
//     int n = countNode(head);
//     int a[n];

//     while(p != NULL)
//     {
//         a[i] = p->data;
//         p = p->next;
//         i++;
//     }

//     i--; p = head;

//     while(p != NULL)
//     {
//         p->data = a[i--];
//         p = p->next;
//     }
// }


// void rev()  //this is the sliding two pointer apporach
// {
//     node *p = head;
//     node *q = NULL;
//     node *r = NULL;

//     while(p != NULL)
//     {
//         r = q;
//         q = p;
//         p = p->next;
//         q->next = r;
//     }
//     head = q;
// }

void rev(node *p, node *q) // reverse using recursion.
{
    if(p != NULL)
    {
        rev(p->next, p);
        p->next = q;
    }
    else
    {
        head = q;
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
    // rev();

    //for recurtion 
    rev(head, NULL);
    display(head);
}