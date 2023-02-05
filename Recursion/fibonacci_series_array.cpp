#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    int a[50] = {-1};

    if (n <= 1)
    {
        a[n] = n;
        return n;
    }
    else
    {
        if (a[n - 1] == -1)
        {
            a[n - 1] = fibo(n - 1);
        }
        else if (a[n - 2] == -1)
        {
            a[n - 2] = fibo(n - 2);
        }
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n;
    cin >> n;

    cout << fibo(n) << endl;
}