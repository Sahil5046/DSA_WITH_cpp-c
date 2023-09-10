#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head = NULL;

void create(int a[], int n)
{
    node *p, *last;
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
    last->next = head;
}

void display(node *p)
{
    //using recursion.
    static int flag = 0;
    if(flag == 0 || p != head)
    {
        flag = 1;
        cout << p->data << " ";
        display(p->next);
    }
    // cout << endl;
    flag = 0;

    // do
    // {
    //     cout << p->data << " ";
    //     p = p->next;
    // } while (p != head);
    
}

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
  display(head);
}