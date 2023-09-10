// Exception handling in C++ consists of three keywords: try, throw and catch:

// The try statement allows you to define a block of code to be tested for errors while it is being executed.

// The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

// The catch statement allows you to define a block of code to be executed if an error occurs in the try block.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 0, c;

    try
    {
        if (b == 0)
        {
            throw 101;
        }

        c = a / b;
        cout << c << endl;
    }
    catch (int ele)
    {
        cout << "This gives an error from try block " << ele << endl;
    }
}