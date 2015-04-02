#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    long long int n,k,i;
    long long int minimum,temp;
    long long int *height;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        height= new long long int[n+1];
        for(i=0;i<n;i++)cin>>height[i];
        sort(height,height+n);
        minimum=height[k-1]-height[0];
        for(i=0;i<=n-k;i++)
        {
            temp = height[i+k-1]-height[i];
            //cout<<temp<<endl;
            if(temp<minimum)minimum=temp;
        }
        cout<<minimum<<endl;
    }
}
