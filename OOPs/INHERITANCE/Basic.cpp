/*
inheritance is a sub class that is derived from the base class

1. class ABC : private XYZ              //private derivation
            {                }
2. class ABC : public XYZ              //public derivation
            {               }
3. class ABC : protected XYZ              //protected derivation
            {              }
4. class ABC: XYZ                            //private derivation by default
            {            }
*/

#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    int x;

    void show()
    {
        cout << x << endl;
    }
};

class Display : public base
{
public:
    int y;

    void display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    base b;
    b.x = 10;
    b.show();

    Display d;
    d.x = 20;
    d.y = 25;

    d.show();
    d.display();
}