#include <bits/stdc++.h>
using namespace std;

struct ar 
{
    int a[50];
    int size;
    int length;
};

// void append(struct ar *arr, int k)
// {
//     if(arr->size > arr->length)
//         arr->length++;
//     arr->a[arr->length - 1] = k;
// }

void insert(struct ar *arr, int pos, int k)
{
    if(pos >= 0 && pos < arr->length)
    {
        for(int i = arr->length; i >= 0; i--)
        {
            arr->a[i] = arr->a[i - 1];
        }
        arr->a[pos] = k;
        arr->length++;
    }
}

void dispaly(struct ar arr)
{
    for(int i = 0; i < arr.length; i++)
    {
        cout << arr.a[i] << " ";
    }
}

int main()
{
  struct ar arr = {{1, 5, 6, 8, 4}, 10, 5};

  int k;
  cout << "Enter an element for insert or append : ";
  cin >> k;

//   append(&arr, k);
int pos;
cout << "Enter the position : ";
cin >> pos;
  insert(&arr, pos, k);
  dispaly(arr);

}