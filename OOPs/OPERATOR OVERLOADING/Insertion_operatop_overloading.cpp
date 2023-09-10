#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    friend ostream &operator<<(ostream &out, Complex c1)
    {
        out << c1.real << " " << c1.img << endl;
        return out;
    }
};

int main()
{
    Complex c1(5, 2);

    cout << c1;
}