#include <iostream>
using namespace std;

double tular(int a, int b)
{
    static double p = 1, f = 1;
    double r;
    if (b == 0)
    {
        return 1;
    }
    else
    {
        r = tular(a, b - 1);
        p = p * a;
        f = f * b;
    }
    return r + p / f;
}

int main()
{
    int a, b;
    cin >> a >> b;
    double y = tular(a, b);
    cout << y << endl;
}