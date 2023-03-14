#include <bits/stdc++.h>
using namespace std;

// void permutation(char str[], int k)       //method 1
// {
//     static int a[10] = {0};
//     static char res[10];

//     if(str[k] == '\0')
//     {
//         res[k] = '\0';

//             cout << res << endl;

//     }
//     else
//     {
//         for(int i = 0; str[i] != '\0'; i++)
//         {
//             if(a[i] == 0)
//             {
//                 res[k] = str[i];
//                 a[i] = 1;
//                 permutation(str, k+1);
//                 a[i] = 0;
//             }
//         }
//     }
// }

void permutation(string str, int s, int e) // method 2
{
    if (s == e)
    {
        cout << str << endl;
    }
    else
    {
        for (int i = s; i <= e; i++)
        {
            swap(str[s], str[i]);
            permutation(str, s + 1, e);
            swap(str[s], str[i]);
        }
    }
}

int main()
{
    string str = "abc";

    // permutation(str,0);

    int s = 0;
    int e = str.length() - 1;

    permutation(str, s, e);
}