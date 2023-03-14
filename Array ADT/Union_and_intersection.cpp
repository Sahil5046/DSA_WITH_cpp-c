#include <bits/stdc++.h>
using namespace std;

struct Arr
{
    int a[50];
    int size;
    int length;
};

// struct Arr *Union(struct Arr *arr1, struct Arr *arr2)  //when Arrays are sorted.
// {
//     int i = 0, j = 0, k = 0;

//     Arr *arr3 = (Arr *)malloc(sizeof(Arr));

//     while (i < arr1->length && j < arr2->length)
//     {
//         if (arr1->a[i] > arr2->a[j])
//         {
//             arr3->a[k++] = arr2->a[j];
//             j++;
//         }
//         else if (arr1->a[i] < arr2->a[j])
//         {
//             arr3->a[k++] = arr1->a[i];
//             i++;
//         }
//         else if (arr1->a[i] == arr2->a[j])
//         {
//             arr3->a[k++] = arr1->a[i];
//             i++, j++;
//         }
//     }

//     while (i < arr1->length)
//     {
//         arr3->a[k++] = arr1->a[i++];
//     }

//     while (j < arr2->length)
//     {
//         arr3->a[k++] = arr2->a[j++];
//     }

//     arr3->length = k;
//     return arr3;
// }

struct Arr *Union(struct Arr *arr1, struct Arr *arr2) //when Arrays are don't sorted.
{
    Arr *arr3 = (Arr *)malloc(sizeof(Arr));

    int k =0;

    for(int i = 0; i < arr1->length; i++)
    {
        arr3->a[k++] = arr1->a[i];
    }

    for(int i = 0; i < arr2->length; i++)
    {
        int flag = 0;
        for(int  j = 0 ; j < arr1->length; j++)
        {
            if(arr2->a[i] == arr1->a[j])
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            arr3->a[k++] = arr2->a[i];
        }
    }

    arr3->length = k;
    return arr3;
}

// struct Arr *inter(struct Arr *arr1, struct Arr *arr2) //when Arrays are don't sorted.
// {
//     Arr *arr4 = (Arr *)malloc(sizeof(Arr));

//     int k = 0;

//     for(int i = 0; i < arr1->length; i++)
//     {
//         for(int j = 0; j < arr2->length; j++)
//         {
//             if(arr1->a[i] == arr2->a[j])
//             {
//                 arr4->a[k++] = arr1->a[i];
//             }
//         }
//     }

//     arr4->length = k;
//     return arr4;
// }

struct Arr *inter(struct Arr *arr1, struct Arr *arr2) //when Arrays are sorted.
{
    int i = 0, j =0, k = 0;

    Arr *arr4 = (Arr *)malloc(sizeof(Arr));

    while(i < arr1->length && j < arr2->length)
    {
        if(arr1->a[i] == arr2->a[j])
        {
            arr4->a[k++] = arr1->a[i++];
            j++;
        }
        else if(arr1->a[i] > arr2->a[j])
        {
            j++;
        }
        else if(arr1->a[i] < arr2->a[j])
        {
            i++;
        }
        
    }

    arr4->length = k;
    return arr4;

}

int main()
{
    struct Arr arr1 = {{1, 2, 3, 4, 5}, 10, 5};
    struct Arr arr2 = {{4, 5, 6, 7, 8}, 10, 5};
    struct Arr *arr3;
    arr3 = Union(&arr1, &arr2);

    for(int i = 0; i < arr3->length; i++)
    {
        cout << arr3->a[i] << " ";
    }
    cout << endl;


    struct Arr *arr4;
    arr4 = inter(&arr1, &arr2);

    for(int i = 0; i < arr4->length; i++)
    {
        cout << arr4->a[i] << " ";
    }
}