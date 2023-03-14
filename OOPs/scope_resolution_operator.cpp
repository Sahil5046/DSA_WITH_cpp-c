#include <bits/stdc++.h>
using namespace std;

class rectangle
{
private:
    int length;
    int breath;

public:
    rectangle(int length, int breath)
    {
        // setLength(l);
        // setBreath(b);
        this -> length = length;
        this -> breath = breath;
    }

    int setLength(int l)
    {
        length = l;
    }

    int setBreath(int b)
    {
        breath = b;
    }

    int area()
    {
        return length * breath;
    }
    int perameter();
};

int rectangle::perameter()
{
    return 2 * (length + breath);
}

int main()
{
    rectangle r(10, 5);
    cout << r.area() << endl;
    cout << r.perameter() << endl;
}