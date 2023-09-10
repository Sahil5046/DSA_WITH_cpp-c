#include <bits/stdc++.h>
using namespace std;

//if function don't return any value or gives an error then catch block is called;

int divition(int a, int b)
{
    if (b == 0)
        throw 2;
    return a / b;
}

int main()
{
    int a = 10, b = 2, c;

    try
    {
        c = divition(a, b);
        cout << c << endl;
    }
    catch (int ele)
    {
        cout << "Here we get an error" << endl;
    }
    cout << "Bye" << endl;
}