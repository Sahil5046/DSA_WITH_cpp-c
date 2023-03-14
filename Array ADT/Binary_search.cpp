#include <bits/stdc++.h>
using namespace std;

struct Arr
{
    int a[50];
    int size;
    int length;
};

int binary(struct Arr *arr, int k)
{
    int start = 0, end = arr->length - 1;

    while(start < end)
    {
        int mid = (start + end) / 2;

        if(arr->a[mid] > k)
        {
            end = mid - 1;
        }

        else if(arr->a[mid] < k)
        {
            start = mid + 1;
        }
        else if(arr->a[mid] == k)
        {
            return mid;
        }
    }
}

int main()
{
  struct Arr arr = {{1,2,3,4,5,6},10,6};

  int k;
  cin >> k;

  cout  << binary(&arr, k) << endl;
}