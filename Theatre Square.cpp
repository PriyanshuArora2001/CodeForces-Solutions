#include <bits/stdc++.h>
using namespace std;

int main() 
{
  long long n,m,a,temp;
  cin>>n>>m>>a;
  if(n%a==0)
  {
    temp=n/a;
  }
  else
  {
    temp=(n/a)+1;
  }
  
  if(m%a==0)
  {
    temp=temp*(m/a);
  }
  else
  {
    temp=temp*((m/a)+1);
  }
  cout<<temp;
}