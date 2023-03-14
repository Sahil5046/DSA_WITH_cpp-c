#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head = NULL;

void create(int a[], int n)
{
    node *last, *p;
    head = new node;
    head->data = a[0];
    head->next = NULL;
    last = head;

    for(int i = 1; i < n; i++)
    {
        node *t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int isSorted(node *p)
{
    int m = INT_MIN;

    while(p != NULL)
    {
        if(p->data < m)
        {
            return 0; 
        }
        m = p->data;
        p = p->next;
    }
    return 1;
}

// void display(node *p)
// {
//     while(p != NULL)
//     {
//         cout << p->data << " ";
//          p = p->next;
//     }cout << endl;
// }

int main()
{
  int n;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  create(a,n);
  cout << isSorted(head) << endl;
//   display(head);
}