#include <bits/stdc++.h>
using namespace std;

struct Arr
{
    int a[50];
    int size;
    int length;
};

void dispaly( Arr arr)
{
    for(int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
}

void edelete(struct Arr *arr,int k)
{
    int x = arr->a[k];

    for(int i = k+1; i < arr->length; i++)
    {
        arr->a[i - 1] = arr->a[i];
    }

    arr->length--;
}

int main()
{
  struct Arr arr ={{1, 5, 6, 8, 4}, 10, 5};
  int k;
  cin >> k;
  edelete(&arr,k);
  dispaly(arr);
}