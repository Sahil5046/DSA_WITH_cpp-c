#include <bits/stdc++.h>
using namespace std;

void anagram(char str1[],char str2[])
{
    int hash[26] = {0};

    for(int i = 0; str1[i] != '\0'; i++)
    {
        hash[str1[i] - 'a']++;
    }

    for(int i = 0; str2[i] != '\0'; i++)
    {
        hash[str2[i] - 'a']--;
    }

    int flag = 1;

    for(int i = 0; i < 26; i++)
    {
        if(hash[i] > 0)
        {
            flag = 0;
        }
    }

    if(flag == 1)
    {
        cout << "This is an Anagram" << endl;
    }
    else
    {
        cout << "This is not an Anagram" << endl;
    }
}

int main()
{
    char str1[] = "medical";
    char str2[] = "decimal";

    anagram(str1,str2);
} 