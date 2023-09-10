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
        real = 1;
        img = 1;
    }

    Complex(int r, int i)
    {
        real = setRealData(r);
        img = setImgData(i);
    }

    int setRealData(int x)
    {
        real = x; 
    }

    int setImgData(int x)
    {
        img = x; 
    }

    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }

    friend ostream &operator<<(ostream &out, Complex c3)
    {
        out << c3.real << " " << c3.img << endl;
        // return out;
    }
};

int main()
{
  Complex c1(4,6);
  Complex c2(2,3);
  Complex c3 = c1 + c2;
  cout << c3;
}