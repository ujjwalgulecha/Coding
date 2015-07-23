<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int64_t x[7];
    int t,m,sum,n,i,s,ct,flag;
    cin>>t;
    while(t--)
    {
        ct=0;
        cin>>n;
        cin>>m;
        for(i=0;i<n;i++)
            scanf("%lld",&x[i]);
        sort(x,x+n);
        for(i=n-1;i>=0;i--)
        {
            if(m<1)break;
            m-=x[i];
            ct++;
        }
        if(m>0)cout<<"-1\n";
        else cout<<ct<<endl;
    }
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int64_t x[7];
    int t,m,sum,n,i,s,ct,flag;
    cin>>t;
    while(t--)
    {
        ct=0;
        cin>>n;
        cin>>m;
        for(i=0;i<n;i++)
            scanf("%lld",&x[i]);
        sort(x,x+n);
        for(i=n-1;i>=0;i--)
        {
            if(m<1)break;
            m-=x[i];
            ct++;
        }
        if(m>0)cout<<"-1\n";
        else cout<<ct<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
