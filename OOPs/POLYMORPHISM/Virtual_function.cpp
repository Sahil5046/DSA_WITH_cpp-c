#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    // void display()
    // {
    //     cout << "This is base class" << endl;
    // }

    virtual void display()
    {
        cout << "This is base class" << endl;
    }
};

class drived : public base
{
public:
    void display()
    {
        cout << "This is drived class" << endl;
    }
};

int main()
{
    // base b;

    drived d;
    base *p = &d;
    // d.display();
    p->display(); // this gives the output of base class  and when base function is virtual so it gives the output from drived class.
}