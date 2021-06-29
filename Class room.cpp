#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str1,str2="hello";
   cin>>str1;
   int count=0,n=0;
   for(int i=0;i<str1.length();i++)
   {
       while(count<str2.length())
       {
           if(str1[i]==str2[count])
           {
                count++;
                break;
           }
           else
           {
               break;
           }
       }
   }
   if(count>=str2.length())
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }
   return 0;
}