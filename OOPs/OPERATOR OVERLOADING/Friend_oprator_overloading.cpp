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

    // this feriend function is operator overloading function
    friend Complex operator+(Complex c1, Complex c2)
    {
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
    }

    void display()
    {
        cout << "The real part is : " << real << " and the imaginary part is : " << img << endl;
    }
};

// IF we use the friend function we can't need to use the scope resolution operator
//  Complex operator +(Complex c1, Complex c2)
//  {
//      Complex temp;
//      temp.real = c1.real + c2.real;
//      temp.img = c1.img + c2.img;
//      return temp;
//  }

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

    c3 = c1 + c2;

    c3.display();
}