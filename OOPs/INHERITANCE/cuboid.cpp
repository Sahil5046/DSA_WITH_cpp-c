#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle(int l = 0, int b = 0)
    {
        this->length = l;
        this->breath = b;
    }

    void setLength(int l)
    {
        length = l;
    }

    void setBreath(int b)
    {
        breath = b;
    }

    int getLength()
    {
        return length;
    }

    int getBreath()
    {
        return breath;
    }

    int area()
    {
        return length * breath;
    }

    int perameter()
    {
        return 2 * (length + breath);
    }
};

class Cuboid : public Rectangle
{
    private:
    int heigth;

    public:
    Cuboid(int l = 0, int b = 0, int h = 0)
    {
        heigth = h;
        setLength(l);
        setBreath(b);
    }

    void setHeight(int h)
    {
        heigth = h;
    }

    int getHeigth()
    {
        return heigth;
    }

    void show()
    {
        cout << "The length is : " << getLength() << " , the breath is : " << getBreath() << " , the heigth is : " << getHeigth() << endl;
    }

    friend ostream& operator<<(ostream &out, Cuboid c)
    {
        out << "The length is : " << c.getLength() << " , the breath is : " << c.getBreath() << " , the heigth is : " << c.getHeigth() << endl;
    }

};

int main()
{
    // Rectangle r(10, 5);

    Cuboid c(20, 10, 15);

    cout << c;
}