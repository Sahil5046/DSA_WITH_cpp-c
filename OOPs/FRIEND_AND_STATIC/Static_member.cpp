#include <bits/stdc++.h>
using namespace std;

class Base
{
private:
    int a = 10;
    int b = 20;

public:
    static int count;

    Base()
    {
        a++;
        b++;
        count++;
    }
};

int Base::count = 0;

int main()
{
    Base b1;
    cout << b1.count << endl;

    Base b2;
    cout << b2.count << endl;

    cout << "this is access from scope resulation : " << Base::count << endl;
}