#include <bits/stdc++.h>
using namespace std;

struct Arr
{
    int a[10];
    int size;
    int length;
};

int missingElement(struct Arr arr) // it is only aviable for 1 missing element (on a sorted array)
{ 
    int diff = arr.a[0] - 0;
    for(int i = 0; i < arr.length; i++)
    {
        if(arr.a[i] - i != diff)
        {
            return diff + i;
            break;
        } 
    }
    return 0;
}

int main()
{
  struct Arr arr = {{6,8,9,10,11},10,5};
  cout << missingElement(arr) << endl;

  
}