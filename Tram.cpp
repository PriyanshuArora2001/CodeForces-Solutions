#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=0,temp=0,i,j;
    cin>>n;
    int arr[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        temp=(temp-arr[i][0])+arr[i][1];
        if(temp>max)
        {
            max=temp;
        }
    }
    cout<<max;
    return 0;
}