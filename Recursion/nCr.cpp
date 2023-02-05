#include <bits/stdc++.h>
using namespace std;

int c(int n, int r)
{
    if (r == 0 || n == r)
    {
        return 1;
    }
    else
    {
        return c(n - 1, r - 1) + c(n - 1, r);
    }
}

// int fac(int a)
// {
//     if(a == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return a*fac(a-1);
//     }
// }

// int c(int n, int r)
// {
//     int s, a, b;

//      s = fac(n);
//     a = fac(r);
//     b = fac(n-r);

//     return s/(a*b);
// }

int main()
{
    int n, r;
    cin >> n >> r;
    cout << c(n, r) << endl;
}