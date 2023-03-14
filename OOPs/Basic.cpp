#include <bits/stdc++.h>
using namespace std;

class rectangale
{
    public:
    int length;
    int breath;

    int area(int a, int b)
    {
        return length * breath;
    }

    int perameater(int a, int b)
    {
        return 2 * (length + breath);
    }
};

int main()
{
  rectangale r1, r2;
  
  r1.length = 10;
  r1.breath = 5;

  cout << r1.area(r1.length, r1.breath) << endl;

  r2.breath = 10;
  r2.length = 10;

  cout << r2.area(r2.length, r2.breath) << endl;
}