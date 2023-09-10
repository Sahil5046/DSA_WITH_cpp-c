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

    last->next = head;
}

void deletepos(node *p, int pos)
{
    node *q;
    int x;
    if(pos == 1)
    {
        while(p->next != head)
        {
            p = p->next;
        }

        //  x = head->data;

        if(p == head)
        {
            delete head;
            head = NULL;
        }
        else
        {
            p->next = head->next;
            delete head;
            head = p->next;
        }
    }
    else
    {
        for(int i = 1; i < pos - 1; i++)
        {
            p = p->next;
        }

        q = p->next;
        p->next = q->next;
        // x = p->data;
        delete q;
    }

    // cout << x << endl;
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


  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int pos;
  cin >> pos;

  create(a,n);

  deletepos(head, pos);

  display(head);

}