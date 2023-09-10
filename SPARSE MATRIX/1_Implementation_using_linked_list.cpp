#include <bits/stdc++.h>
using namespace std;

struct node
{
    int col;
    int data;
    struct node *next;
};

void create(node **p)
{
    int row, colu, value;
    cin >> row >> colu >> value;

    struct node *temp;

    if(p[row] == NULL)
    {
        p[row] = new node;
        temp = p[row];
        temp->col = colu;
        temp->data = value;
        temp->next = NULL;
    }
    else
    {
        temp = p[row];

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        node *t = new node;

        // t = p[row];
        t->col = colu;
        t->data = value;
        t->next = NULL;
        temp->next = t;
    }
}

void display(node **p, int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        node *temp = p[i]; 
        for(int j = 0; j < n; j++)
        {
            if(temp->col == j)
            {
                cout << temp->data << " ";
            }
            else{
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int m,n,val;
    cout << "Enter matrix dimensions : ";
    cin >> m >> n;
    cout << "Enter total number of non-zero elements:";
    cin >> val;

    node **head = new node*[m];

    for(int i = 0; i < val; i++)
    {
        cout << "Enter row, col, data : ";
        create(head);
    }

    cout << "The Sparse Matrix is : ";
    display(head, m, n);
}