#include<iostream>
using namespace std;

int main() 
{
  long long int n;
  cin>>n;
  if(n<=2)
  {
    cout<<"No";
  }
  else if(n%2==0)
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"No";
  }
}