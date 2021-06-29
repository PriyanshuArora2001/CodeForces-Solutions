#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int isLowercaseVowel;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i=0; str[i]!='\0'; i++)
    {
        isLowercaseVowel = (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y');

        if(!isLowercaseVowel)
        {
            cout<<"."<<str[i];
        }
    }
    
    return 0;
}