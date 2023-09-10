#include <bits/stdc++.h>
using namespace std;

// class base
// {
// private:
//     int a;

// protected:
//     int b;

// public:
//     int c;

//     friend void Drive();
// };

// //if we can access the class's private, protected and public then we get error
// //so, we call the friend function, here we can't get error.

// void Drive()
// {
//     base b;

//     b.a = 5;
//     b.b = 10;
//     b.c = 15;
// }

class hi;

class base
{
private:
    int a = 10;

    friend hi;
};

class hi
{
public:
    int b = 15;
    base h;
    void display()
    {
        cout << "the value of base class element is : " << h.a << endl;
        cout << "here the hi class element value is : " << b << endl;
    }
};

int main()
{
    hi h;
    h.display();
}