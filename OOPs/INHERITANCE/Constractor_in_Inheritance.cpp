#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    base()
    {
        cout << "this is base" << endl;
    }

    base(int x)
    {
        cout << "the value of the x is : " << x << endl;
    }
};

class Drive : public base
{
public:
    Drive()
    {
        cout << "this is drive" << endl;
    }

    Drive(int a)
    {
        cout << "the value of a is : " << a << endl;
    }

    Drive(int a, int b) : base(b)
    {
        cout << "the vale of a in the drive is : " << a << endl;
    }
};

int main()
{
    Drive d(10, 20);
}