#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,*a,*dp,i,great;
    cin>>t;
    while(t--)
    {
        cin>>n;
        great=0;
        a = new int[n];
        dp = new int [n];
        dp[0]=0;
        for(i=0;i<n;i++)cin>>a[i];

        for(i=1;i<n;i++)
        {
            dp[i]=max(a[i]-a[i-1],a[i]-a[i-1]+dp[i-1]);
        }
        for(i=0;i<n;i++)
        {
            if(dp[i]>great)great=dp[i];
        }
        if(great<=0)cout<<"UNFIT\n";
        else cout<<great<<endl;
    }
}
