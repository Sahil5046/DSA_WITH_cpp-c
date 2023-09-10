#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;

    struct node *next;
}*head = NULL;

void create(int a[], int n)
{
    // node *head;
    node *last;
    
    head = new node;

    head->data = a[0];
    head->next = NULL;

    last = head;

    for(int i = 1; i < n; i++)
    {
        node *t = new node;

        t->data = a[i];
        last->next = t;
        t->next = NULL;
        last = t;
    }
}

int length(node *p)
{
    int count = 0;
    
    while(p != NULL)
    {
        count++;
        p = p->next;
    }
    
    return count;
}

void findMiddle(node *p)
{
    int n = length(head);
    
    int mid = ceil(n / 2.0);
    
    cout << "Middle position is : " << mid << endl;
    
    int count = 0;
    
  
    for(int i = 0; i < mid - 1; i++)
    {
        p = p->next;
    }
    
    cout << "Middle element is : " << p->data << endl;
}

// void findMiddle(node *p)
// {
//     node *q;

//     p = q = head;

//     while(p != NULL)
//     {
//         p = p->next;
//         if(p != NULL)
//         {
//             p = p->next;
//         }

//         if(p != NULL)
//         {
//             q = q->next;
//         }
//     }

//     cout << "Middle element is : " << q->data << endl;
// }

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

    findMiddle(head);

    display(head);
}