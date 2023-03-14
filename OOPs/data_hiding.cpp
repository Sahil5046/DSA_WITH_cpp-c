#include <bits/stdc++.h>
using namespace std;

class rectangale
{
private:
    int length;
    int width;

public:
    void setLength(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            length = 0;
        }
    }

    void setWidth(int w)
    {
        if(w >= 0)
        {
            width = w;
        }
        else 
        {
            width = 0;
        }
    }

    int getLength()
    {
        return length;
    }

    int getWidth()
    {
        return width;
    }
};

int main()
{
    rectangale r;

    int l, w;
    cin >> l >> w;

    r.setLength(l);
    r.setWidth(w);

    if(r.getLength() == 0)
    {
        cout << "Length is not 0." << endl;
    }
    else
    {
        cout << r.getLength() << endl;
    }


}