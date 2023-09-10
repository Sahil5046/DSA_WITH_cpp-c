#include <bits/stdc++.h>
#include <stack>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*head = NULL, *second = NULL;

void fcreate(int a[], int n)
{
    head = new node;
    node *last;

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

void screate(int a[], int n, node *p)
{
    node *last;

    second = new node;

    second->data  = a[0];
    second->next = NULL;
    last = second;

    for(int i = 1; i < n; i++)
    {
        node *t = new node;

        t->data = a[i];
        last->next = t;
        t->next = NULL;
        last = t;
    }
    last->next = p;
}


void IntersectionPointer(node *p, node *q)
{
    stack<node*> stk1;

    while(p != NULL)
    {
        stk1.push(p);
        p = p->next;
    }


    stack<node*> stk2;

    while(q != NULL)
    {
        stk2.push(q);
        q = q->next;
    }

    node *t;

    while(stk1.top() == stk2.top())
    {
        t = stk1.top();

        stk1.pop();
        stk2.pop();
    }


    cout << "Intersection node : " << t->data << endl;



}


int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;

  int a[n];

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  fcreate(a, n);

  int m;
  cout << "Enter the same location pos : ";
  cin >> m;


//create second linked list....
  node *temp = head;

  while(m > 0)
  {
    temp = temp->next;
    m--;
  }
  
  cout << temp->data << endl;


  int b;
  cout << "Enter the another array size : ";
  cin >> b;

  int c[b];

  for(int i = 0; i < b; i++)
  {
    cin >> c[i];
  }

  screate(c, b, temp);

  IntersectionPointer(head, second);
}