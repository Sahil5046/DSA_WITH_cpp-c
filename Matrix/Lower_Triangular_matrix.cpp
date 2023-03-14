#include <bits/stdc++.h>
using namespace std;

struct m
{
    int size;
    int *a;
};

// row major formula => a[i][j] = (i * (i - 1) / 2 + (j - 1));

// coloumn major formula => a[i][j] = (i * (j - 1) - [(j - 1) * (j - 2) / 2] + (i - j))

void Set(struct m *arr, int i, int j, int k)
{
    if (i >= j)
    {
        arr->a[i * (i + 1) / 2 + j - 1] = k; 
    }
}

int Get(struct m *arr,int i, int j)
{
    if(i >= j)
    {
        return arr->a[i*(i+1)/2 + j - 1];
    }
    else
    {
        return 0;
    }
}

void dispaly(struct m *arr)
{
    for(int i = 1; i <= arr->size; i++)
    {
        for(int j = 1; j <= arr->size; j++)
        {
            if(i >= j)
            {
                cout << arr->a[i*(i+1)/2 + j - 1] << " ";
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

    int i, j, x;

    cout << "Enter the Diemention : ";
    cin >> arr.size;

    arr.a = (int *)malloc((arr.size * (arr.size + 1) / 2)  * sizeof(int));

    cout << "Enter the elements : ";

    for (int i = 1; i <= arr.size; i++)
    {
        for (int j = 1; j <= arr.size; j++)
        {
            cin >> x;

            Set(&arr, i, j, x);
        }
    }

    cout << endl;
    cout << endl;

    dispaly(&arr);
}