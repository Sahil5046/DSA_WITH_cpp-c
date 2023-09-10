#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int rollNo;
    string name;

    static int count;

    student(string n)
    {
        count++;
        rollNo = count;
        name = n;
    }

    void display()
    {
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name : " << name << endl;
    }
};

int student ::count = 0;

int main()
{
    student s1("sahil");
    student s2("soyeb");
    student s3("suman");
    student s4("sujit");
    student s5("soham");

    s1.display();
    s5.display();

    cout << "total number of student is : " << student::count << endl;
}