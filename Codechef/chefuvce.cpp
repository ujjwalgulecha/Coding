<<<<<<< HEAD
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int t,i;
    long long int n,a[100002],sum,avg,ct;
    cin>>t;
    while(t--)
    {
        ct=0;
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        avg=sum/n;
        for(i=0;i<n;i++)
        {
            ct+=fabs(avg-a[i]);
        }
        cout<<ct<<endl;
    }
    return 0;
}
=======
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int t,i;
    long long int n,a[100002],sum,avg,ct;
    cin>>t;
    while(t--)
    {
        ct=0;
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        avg=sum/n;
        for(i=0;i<n;i++)
        {
            ct+=fabs(avg-a[i]);
        }
        cout<<ct<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
