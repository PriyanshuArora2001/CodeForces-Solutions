#include <bits/stdc++.h>

using namespace std;


string removeDuplicate(string str)
{
  int length = str.length();
  for(int i = 0; i < length; i++)
  {
    char currChar = str[i];
    for(int j = i+1; j < length; j++)
    {
      if(currChar == str[j])
        str.erase (remove(str.begin()+j, str.end(), str[j]), str.end());
    }
  }
  return str;
}

int main()
{
    string str;
    cin>>str;
    str = removeDuplicate(str);
    if(str.length()%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}