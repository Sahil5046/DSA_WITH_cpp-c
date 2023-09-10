#include <bits/stdc++.h>
using namespace std;

class parent
{
public:
    void display()
    {
        cout << "This is a parent class" << endl;
    }
};

class child : public parent
{
public:
    void display()
    {
        cout << "This is a child class" << endl;
    }
};

int main()
{
    parent p;
    p.display();

    child c;
    c.display(); // when no display function is avilable in child function then it is overriding from parent class.
}