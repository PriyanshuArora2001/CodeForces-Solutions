#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,count=0,i=5;
    cin>>n;
    while(sum<=n && i>0)
    {
        if(i<=(n-sum))
        {
            sum=sum+i;
            count++;
        }
        else
        {
            i--;
        }
    }
    cout<<count;
    return 0;
}