#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i;
    int k=1;
    long long int sum,n,*money;
    while(t--)
    {
        cin>>sum;
        cin>>n;
        int flag=0;
        money = new long long int[n+1];
        for(i=0;i<n;i++)cin>>money[i];
        sort(money,money+n);
        long long int temp=0;
        long long int ct=0;
        for(i=n-1;i>=0;i--)
        {
            temp+=money[i];
            ct++;
            if(temp>=sum){flag=1;break;}
        }
        cout<<"Scenario #"<<k<<":"<<endl;
        if(flag==0)cout<<"impossible"<<endl;
        else cout<<ct<<endl;
        k++;
    }
    return 0;
}
