#include <bits/stdc++.h>
using namespace std;

// void findDuplicate(string str)
// {
//     int hash[26] = {0};

//     for(int i = 0; i < str.length(); i++)
//     {
//         int index = str[i] - 'a';

//         hash[index]++;
//     }

//     for(int i = 0; i < 26; i++)
//     {
//         if(hash[i] > 1)
//         {
//             printf("%d ", hash[i]);
//             printf("%c ", i + 'a');
//         }
//     }
//     // cout << endl;
// }

void findDuplicate(string str)
{
    int h = 0, x = 0;

    for(int i = 0; i < str.length(); i++)
    {
        x = 1;

        x = x << (str[i] - 'a');

        if((x & h )> 0)
        {
            cout << "Duplicates are : " << str[i] << " " << endl;
        }
        else{
            h = (x | h);
        }
    }
}

int main()
{
  char str[] = "geeksforgeeks";
  //cin >> str;

  findDuplicate(str);

}