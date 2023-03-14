#include <bits/stdc++.h>
using namespace std;

struct m
{
    int *a;
    int size;
};

// row major formula is arr->a[((i - 1) * arr->size) - ((i - 2) * (i - 1) / 2) + (j - i)];

// column major formula is arr->a[(((j - 1) * j) / 2) + (i - 1)];

void Set(struct m *arr, int i, int j, int k)
{
    if (i <= j)
    {
        arr->a[((i - 1) * arr->size) - ((i - 2) * (i - 1) / 2) + (j - i)] = k;
    }
}

int Get(struct m *arr, int i, int j)
{
    if (i <= j)
    {
        return arr->a[((i - 1) * arr->size) - ((i - 2) * (i - 1) / 2) + (j - i)];
    }
    else
    {
        return 0;
    }
}

void display(struct m arr)
{
    for (int i = 1; i <= arr.size; i++)
    {
        for (int j = 1; j <= arr.size; j++)
        {
            if (i <= j)
            {
                cout << arr.a[((i - 1) * arr.size) - ((i - 2) * (i - 1) / 2) + (j - i)] << " ";
            }
            else
            {
                cout << '0' << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    struct m arr;

    int i, j, k;

    cout << "Enter the size : ";
    cin >> arr.size;

    arr.a = new int[arr.size * (arr.size + 1) / 2];

    cout << "Enter the elements : \n";

    for (i = 1; i <= arr.size; i++)
    {
        for (j = 1; j <= arr.size; j++)
        {
            cin >> k;
            Set(&arr, i, j, k);
        }
    }

    cout << endl;
    cout << endl;

    display(arr);
}