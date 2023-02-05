#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 2) + fibo(n - 1);
    }
}

// int fibo(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }

//     int x = 0, y = 1, sum = 0;

//     for (int i = 2; i <= n; i++)
//     {
//         sum = x + y;
//         x = y;
//         y = sum;
//     }
//     return sum;
// }

int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
}