#include <bits/stdc++.h>
using namespace std;

void duplicate(int a[], int n)
{
    

    for(int i = 0; i < n - 1; i++)
    {
        int count = 1;
        
        for(int j = i+1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                a[j] = -1;
            }
        }
        if(count > 1)
        {
            cout << a[i] << " " << count << endl;
        }
    }
    
}

int main()
{
  int n;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  duplicate(a,n);
}