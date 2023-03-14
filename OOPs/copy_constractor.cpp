#include <bits/stdc++.h>
using namespace std;

class rectangle
{
private:
    int length;
    int breath;

public:
    // rectangle()
    // {
    //     length = 1;
    //     breath = 1;
    // }

    rectangle(int l, int b)
    {
        setLength(l);
        setBreath(b);
    }

    rectangle(rectangle &r) //deep copy
    {
        length = r.length;
        breath = r.breath;
    }

    void setLength(int l)
    {
        length = l;
    }
    void setBreath(int b)
    {
        breath = b;
    }

    int area()
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
    rectangle r(10, 5);
    rectangle r2(r);
    cout << r.area() << endl;
    cout << r2.area() << endl;
}