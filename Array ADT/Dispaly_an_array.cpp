#include <bits/stdc++.h>
using namespace std;

struct ar
{
    int a[80];
    int size;
    int length;
};

void display(struct ar arr)
{
    for(int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
}

int main()
{
    struct ar arr = {{2, 4, 8, 9, 1}, 20, 5};
    

    display(arr);
}