#include<iostream>
using namespace std;

void f1(int n);
void f2(int n);

int main()
{
    int n;
    cin >> n;
    f1(n);
}

void f1(int n)
{
    if(n > 0)
    {
        cout << n << " ";
        f2(n-1);
    }
}

void f2(int n)
{
    if(n > 1)
    {
        cout << n << " ";
        f1(n/2);
    }
}