#include <bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
} *head = NULL;

void create(int a[], int n)
{
  node *t, *last;
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

void insert(node *p, int val)
{
  // p = head;
  if(head->data > val)
  {
    node *t = new node;
    t->data = val;
    t->next = head;
    head = t;
  }

  else
  {
    node *q = NULL;

    while ( p->data < val)
    {
      q = p;
      p = p->next;
    }

    node *t = new node;
    t->data = val;
    t->next = p;
    q->next = t;
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

  int val;
  cin >> val;

  create(a, n);

  insert(head, val);

  display(head);
}