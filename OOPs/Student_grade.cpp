#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    int roll;
    string name;
    int sub1;
    int sub2;
    int sub3;

public:
    student(int r, string n, int s1, int s2, int s3)
    {
        roll = r;
        name = n;
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
    }

    int total()
    {
        return sub1 + sub2 + sub3;
    }

    char grade()
    {
        int ave = total() / 3;

        if (ave > 60)
        {
            return 'A';
        }
        else if (ave >= 40 && ave <= 60)
            return 'B';
        else
            return 'C';
    }
};

int main()
{
    int roll;
    string name;
    int sub1;
    int sub2;
    int sub3;

    cin >> roll >> name >> sub1 >> sub2 >> sub3;

    student s(roll, name, sub1, sub2, sub3);

    cout << s.total() << endl;
    cout << s.grade() << endl;
}