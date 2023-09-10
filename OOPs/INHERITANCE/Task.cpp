#include <bits/stdc++.h>
using namespace std;

class Employee
{
    private:
    int eid;
    string ename;

    public:
    Employee(int i, string n)
    {
        eid = i;
        ename = n;
    }

    int getEid()
    {
        return eid;
    }

    string getEname()
    {
        return ename;
    }
};

class fullTimeEmployee : public Employee
{
    private:
    int salary;

    public:
    fullTimeEmployee(int i, string n, int sal) : Employee(i,n)
    {
        salary = sal;
    }

    int getSal()
    {
        return salary;
    }
};

class partTimeEmployee : public Employee
{
    private:
    int wedge;

    public:
    partTimeEmployee(int i, string n, int w) : Employee(i, n)
    {
        wedge = w;
    }

    int getWedge()
    {
        return wedge;
    }
};

int main()
{
    // Employee 
    fullTimeEmployee f(1, "sahil", 2000);
    partTimeEmployee p(2, "soyeb", 3000);

    cout << f.getEid() << " is full time employee name is : " << f.getEname() << " and salary is : " << f.getSal() << endl;
    cout << p.getEid() << " is full time employee name is : " << p.getEname() << " and salary is : " << p.getWedge() << endl;
}