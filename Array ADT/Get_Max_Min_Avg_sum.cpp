#include <bits/stdc++.h>
#include<numeric>
using namespace std;

struct Arr
{
    int a[50];
    int size;
    int length;
};

int getSum(struct Arr arr)
{
    int sum = 0;
    // for (int i = 0; i < arr.length; i++)
    // {
    //     sum += arr.a[i];
    // }
    // return sum;

    return accumulate(arr.a, arr.a + arr.length, sum); //this is a function for array sum;
}

int getAvg(struct Arr arr)
{
    int sum = 0;

    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.a[i];
    }
    return (sum / arr.length);
}

int getMax(struct Arr arr)
{
    int max = arr.a[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.a[i] > max)
        {
            max = arr.a[i];
        }
    }
    return max;
}

int getMin(struct Arr arr)
{
    int min = arr.a[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.a[i] < min)
        {
            min = arr.a[i];
        }
    }
    return min;
}

int main()
{
    struct Arr arr = {{2, 5, 6, 7, 4, 9, 6}, 15, 7};

    cout << getSum(arr) << endl;
    cout << getAvg(arr) << endl;
    cout << getMax(arr) << endl;
    cout << getMin(arr) << endl;
}