<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n,i,a[51],sum=0,avg,k,ct;
    k=1;
    for(;;)
    {
        ct=0;
        sum=0;
        cin>>n;
        if(n==0)break;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg>a[i])
        {
            ct+=avg-a[i];
        }
    }
    cout<<"Set #"<<k<<endl<<"The minimum number of moves is "<<ct<<"."<<endl;
    k++;
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int n,i,a[51],sum=0,avg,k,ct;
    k=1;
    for(;;)
    {
        ct=0;
        sum=0;
        cin>>n;
        if(n==0)break;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg>a[i])
        {
            ct+=avg-a[i];
        }
    }
    cout<<"Set #"<<k<<endl<<"The minimum number of moves is "<<ct<<"."<<endl;
    k++;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
