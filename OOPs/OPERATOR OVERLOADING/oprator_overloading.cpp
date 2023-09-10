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

    // Complex add(Complex x)
    // {
    //     Complex temp;
    //     temp.real = real + x.real;
    //     temp.img = img + x.img;
    //     return temp;
    // }

    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

    void display()
    {
        cout << "The real part is : " << real << " and the imaginary part is : " << img << endl;
    }
};

int main()
{
    int r1, i1, r2, i2;
    cout << "Enter the real and imaginary number : "
         << " ";
    cin >> r1 >> i1;
    Complex c1(r1, i1);

    cout << "Enter the real and imaginary number : "
         << " ";
    cin >> r2 >> i2;
    Complex c2(r2, i2);

    Complex c3;
    // c3 = c1.add(c2);

    // another way
    c3 = c1 + c2;

    c3.display();
}