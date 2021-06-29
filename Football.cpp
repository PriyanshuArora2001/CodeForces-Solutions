#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,count0=0,count1=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            count0++;
            count1=0;
        }
        else
        {
            count1++;
            count0=0;
        }
        if(count0>6||count1>6)
        {
            break;
        }
    }
    if(count0>6||count1>6)
    {
       cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
   return 0;
}