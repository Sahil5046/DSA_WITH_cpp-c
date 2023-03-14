#include <bits/stdc++.h>
using namespace std;

struct Arr
{
    int a[50];
    int size;
    int length;
};

// void display(struct Arr arr)
// {
//     for (int i = 0; i < arr.length; i++)
//     {
//         cout << arr.a[i] << " ";
//     }
// }

int linear(struct Arr *arr, int ele)
{
    int pos = -1;
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->a[i] == ele)
        {
            pos = i;
            break;
        }
    }
    return pos;
}

int main()
{
    struct Arr arr = {{1, 5, 4, 9, 6}, 10, 5};
    int ele;
    cin >> ele;

    cout << linear(&arr, ele)<< endl;
    // display(arr);
}