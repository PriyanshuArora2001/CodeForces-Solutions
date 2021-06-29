#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][3];
    int i,j,sum=0,count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+arr[j][i];
        }
        if(sum==0)
        {
            count++;
        }
        sum=0;
    }
    if(count==3)
    {
       cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
   return 0;
}