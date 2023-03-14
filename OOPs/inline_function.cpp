#include <bits/stdc++.h>
using namespace std;

class test
{
public:
    void fan1()
    {
        cout << "inline" << endl;
    }

    void fan2();
};

void test::fan2()
{
    cout << "non_inline";
}

int main()
{
    test r;
    r.fan1();
    r.fan2();
}