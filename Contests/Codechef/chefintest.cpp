<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long int n,k,s;
    cin>>n>>k;
    int ct=0;
    while(n--)
    {
        scanf("%ld",&s);
        if(s%k==0)ct++;
    }
    cout<<ct<<endl;
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long int n,k,s;
    cin>>n>>k;
    int ct=0;
    while(n--)
    {
        scanf("%ld",&s);
        if(s%k==0)ct++;
    }
    cout<<ct<<endl;
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
