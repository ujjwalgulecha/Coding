<<<<<<< HEAD
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int t,n,i,ct1,ct2,max;
    long long int a[1001],b[1001];
    cin>>t;
    while(t--)
    {
        for(i=0;i<1000;i++){a[i]=b[i]=0;}
        ct1=ct2=1;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]!=0)ct1++;
            if(b[i]-b[i-1]!=0)ct2++;
        }
        if(ct1>ct2)cout<<ct2<<endl;
        else cout<<ct1<<endl;
    }
    return 0;
}
=======
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int t,n,i,ct1,ct2,max;
    long long int a[1001],b[1001];
    cin>>t;
    while(t--)
    {
        for(i=0;i<1000;i++){a[i]=b[i]=0;}
        ct1=ct2=1;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]!=0)ct1++;
            if(b[i]-b[i-1]!=0)ct2++;
        }
        if(ct1>ct2)cout<<ct2<<endl;
        else cout<<ct1<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
