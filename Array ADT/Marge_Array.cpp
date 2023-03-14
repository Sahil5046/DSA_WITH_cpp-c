#include <bits/stdc++.h>
using namespace std;

struct Arr
{
    int a[50];
    int size;
    int length;
};

struct Arr *marge(struct Arr *arr1, struct Arr *arr2)
{
    int i = 0, j = 0, k = 0;

    Arr *arr3 = (Arr *)malloc(sizeof(Arr));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->a[i] > arr2->a[j])
        {
            arr3->a[k++] = arr2->a[j];
            j++;
        }
        else if (arr1->a[i] < arr2->a[j])
        {
            arr3->a[k++] = arr1->a[i];
            i++;
        }
        else if (arr1->a[i] == arr2->a[j])
        {
            arr3->a[k++] = arr1->a[i];
            i++, j++;
        }
    }

    while (i < arr1->length)
    {
        arr3->a[k++] = arr1->a[i++];
    }

    while (j < arr2->length)
    {
        arr3->a[k++] = arr2->a[j++];
    }

    arr3->length = arr1->length + arr2->length;
    return arr3;
}

// void display(struct Arr arr3)
// {
//     for(int i = 0; i < arr3.length; i++)
//     {
//         cout << arr3.a[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    struct Arr arr1 = {{1, 3, 5, 7, 9}, 10, 5};
    struct Arr arr2 = {{2, 4, 6, 8, 10}, 10, 5};

    struct Arr *arr3;

    arr3 = marge(&arr1, &arr2);
    //   display(*arr3)

    for (int i = 0; i < arr3->length; i++)
    {
        cout << arr3->a[i] << " ";
    }
}