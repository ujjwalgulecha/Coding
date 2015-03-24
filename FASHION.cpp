#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,i;
    int a[1001],b[1001];
    long long int sum;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(i=n-1;i>=0;i--)
            sum+=(a[i]*b[i]);
        cout<<sum<<endl;
    }
}
