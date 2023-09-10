#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int front;
    int rear;
    int size;
    int *a;
};

void enqueue(Queue *q, int ele)
{
    if((q->rear + 1) % q->size == q->front)
    {
        cout << "Queue is full." << endl;
    }
    else{
        q->rear = (q->rear + 1) % q->size;
        q->a[q->rear] = ele;
    }
}

int dequeue(Queue *q)
{
    int val = -1;

    if(q->front == q->rear)
    {
        cout << "Queue is Empty." << endl;
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        val  = q->a[q->front];

        if(q->front == q->rear)
        {
            q->front = q->rear = 0;
        }
    }
    return val;
}

int main()
{
    Queue q;

    cout << "Enter the size of the array : ";
    cin >> q.size;

    q.a = new int[q.size];

    q.front = q.rear  = 0;

    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    cout << dequeue(&q) << endl;
    enqueue(&q, 4);

    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;
    cout << dequeue(&q) << endl;

}