#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ct,i,n;
    double avg,sum,*a;
    cin>>t;

    while(t--)
    {
        ct=0;
        sum=0.0;
        cin>>n;
        a = new double[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        avg=sum/n;
        for(i=0;i<n;i++)
        {
            if(a[i]>avg)ct++;
        }
        cout<<ct<<endl;
    }
    return 0;
}
