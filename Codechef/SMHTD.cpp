<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n,i,ct=0,a[100001];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]<=a[i]&&i+1<n)
        {
            a[i+1]++;
            ct++;
        }
    }
    cout<<ct<<endl;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int n,i,ct=0,a[100001];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]<=a[i]&&i+1<n)
        {
            a[i+1]++;
            ct++;
        }
    }
    cout<<ct<<endl;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
