#include <bits/stdc++.h>
using namespace std;

class rectangle
{
    public:
    int length;
    int breath;

    int size()
    {
        return length * breath;
    }

    int perameater()
    {
        return 2 * (length + breath);
    }
};

int main()
{
  rectangle *p;
  rectangle r;
  p = &r;
  
  p -> length = 10;
  p -> breath = 15;

  cout << p -> size() << endl;

  rectangle *q;
  q = new rectangle;

  q -> length = 12;
  q -> breath = 10;

  cout << q -> size() << endl;

}