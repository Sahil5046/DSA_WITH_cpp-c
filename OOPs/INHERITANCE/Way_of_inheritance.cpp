#include <bits/stdc++.h>
using namespace std;

class parent
{
    private:
    int a;

    protected:
    int b;

    public:
    int c;

    void get()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

class child : public parent
{
    private:

    protected:

    public:
    void get()
    {
        //when parent is private, public and protected then we can not access the private value. 
        // a = 15;
        b = 25;
        c = 35;
    }
};

class grandChild : public child
{
    //when child is private we can not access the any thing value.
    private:

    //when child is protected we can not access the private value.
    protected:

    public: 
    void get()
    {
        // a = 20;
        // b = 30; 
        // c = 40;
    }
};

int main()
{
    parent v;
    // v.a = 10;  this is not accessable beacause the value is private
    // v.b = 12;   this is not accessable beacause the value is protected
    v.c = 15;
}