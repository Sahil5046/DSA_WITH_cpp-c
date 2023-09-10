#include <bits/stdc++.h>
using namespace std;

//when virtual function is called in the main function then this class is call Abstract class..

class car
{
public:
    // virtual void start()
    // {
    //     cout << "car start" << endl;   this is a simple virtual function ..
    // }
    // virtual void stop()
    // {
    //     cout << "car stop" << endl;
    // }

    // now real virtual function is ..

    virtual void start() = 0;
    virtual void stop() = 0;
};

class jannova : public car
{
public:
    void start()
    {
        cout << "jannova start" << endl;
    }
    void stop()
    {
        cout << "jannova stop" << endl;
    }
};

class shift : public car
{
public:
    void start()
    {
        cout << "shift start" << endl;
    }
    void stop()
    {
        cout << "shift stop" << endl;
    }
};

int main()
{
    // when we get output from car class start output
    jannova j;
    car *c = new jannova();
    c->start();

    // when we get output from jannpva class start output, then we can initilize car class start function virtual.

    shift s;
    c = new shift();
    // here pointer is pointed in shift start function. not pointed in jannova start function ..
    c->start();
}