#include <bits/stdc++.h>
using namespace std;

class outer 
{
    public:
    void function()
    {
        i.display();

        //it can not access the private member..
    }

    class inner 
    {
        public:
        
        void display()
        {
            cout << "This is a inner class" << endl;
        }
    };

    inner i;
};

int main()
{
  outer o;
  o.function();

  outer :: inner i;
  i.display();
}