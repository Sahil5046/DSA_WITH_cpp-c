#include <bits/stdc++.h>
using namespace std;

// struct ma
// {
//     int a[10];
//     int size;
// };

// void Set(struct ma *arr, int i, int j, int k)
// {
//     if (i == j)
//     {
//         arr->a[i - 1] = k;
//     }
// }

// int get(struct ma arr, int i, int j)
// {
//     if (i == j)
//     {
//         return arr.a[i - 1];
//     }
//     else
//     {
//         return 0;
//     }
// }

// void display(struct ma arr)
// {
//     for (int i = 1; i <= arr.size; i++)
//     {
//         for (int j = 1; j <= arr.size; j++)
//         {
//             if (i == j)
//             {
//                 cout << arr.a[i - 1] << " ";
//             }
//             else
//             {
//                 cout << '0' << " ";
//             }
//         }
//         cout << endl;
//     }
// }


class Diagonal
{
    private:
    int n;
    int *a;

    public:
    Diagonal(int n)
    {
        this->n = n;
        a = new int[n];
    }

    void Set(int i, int j, int k)
    {
        if(i == j)
        {
            a[i - 1] = k;
        }
    }

    int get(int i, int j)
    {
        if(i == j)
        {
            return a[i - 1];
        }
        else
        {
            return 0;
        }
    }


    void display()
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(i == j)
                {
                    cout << a[i - 1] << " ";
                }
                else
                {
                    cout << '0' << " ";
                }
            }
            cout << endl;
        }
    }

    ~Diagonal()
    {
        delete []a;
    }
};

int main()
{
    // struct ma arr;

    // arr.size = 4;

    // Set(&arr, 1, 1, 5), Set(&arr, 2, 2, 7), Set(&arr, 3, 3, 9), Set(&arr, 4, 4, 12);

    // display(arr);

    //using class

    // int n;
    // cin >> n;

    Diagonal arr(4);

    arr.Set(1,1,5);
    arr.Set(2,2,9);
    arr.Set(3,3,10);
    arr.Set(4,4,8);

    arr.display();
}