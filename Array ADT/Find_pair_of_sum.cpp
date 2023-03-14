#include <bits/stdc++.h>
using namespace std;

void pairSum(int a[], int n, int k)
{
    int hash[100] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[a[i]] = 1;
    }

    for (int i = 0; i < 100; i++)
    {
        int sum = k;

        if (hash[i] == 1)
        {
            sum -= i;
            hash[i] = 0;

            if (hash[sum] == 1)
            {
                cout << i << " " << sum << endl;
            }
        }
    }
}

// void pairsum(int a[], int n, int k)   //when array is sorted.
// {
//     int s = 0;
//     int e = n - 1;

//     while (s < e)
//     {
//         if (a[s] + a[e] == k)
//         {
//             cout << a[s] << " " << a[e] << endl;
//             s++, e--;
//         }
//         else if (a[s] + a[e] > k)
//         {
//             e--;
//         }
//         else
//         {
//             s++;
//         }
//     }
// }

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    pairSum(a, n, k);
}