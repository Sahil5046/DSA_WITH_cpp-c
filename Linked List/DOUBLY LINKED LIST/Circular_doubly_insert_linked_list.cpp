#include <bits/stdc++.h>
using namespace std;
struct node 
{
    struct node *prev;
    int data;
    struct node *next;
}*head = NULL;

void create(int a[], int n)
{
    node *last;
    head = new node;
    head->prev = NULL;
    head->data = a[0];
    head->prev = NULL;
    last = head;

    for(int i = 1; i < n; i++)
    {
        node *t = new node;
        t->prev = last;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    head->prev = last;
    last->next = head;
}

void insert(node *p, int ele, int pos)
{
    node *t = new node;
    t->data = ele;
    if(pos == 0)
    {
        // t->prev = NULL;
        // t->data = ele;
        t->next = head;
        t->prev = head->prev;
        head->prev->next = t;
        head->prev = t;
        head = t;
    }

    else
    {
        for(int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        t->prev = p;
        p->next->prev = t;
        p->next = t;
    }
}

void display(node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    
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

    create(a, n);

    int ele;
    cout << "Enter the element : ";
    cin >> ele;

    int pos;
    cout << "Enter the position : ";
    cin >> pos;

    insert(head, ele, pos);

    display(head);

}