<<<<<<< HEAD
#include<iostream>
#include<math.h>
#include<stdint.h>
using namespace std;
int check(uint64_t big);
int arr[171]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0};
int main()
{
    uint64_t l,r,i;
    int ct;
    int t,x;
    cin>>t;
    while(t--)
    {
        ct=0;
        cin>>l>>r;
        for(i=l;i<=r;i++)
        {
            x=check(i);
            if(arr[x])ct++;
        }
        cout<<ct<<endl;

    }
    return 0;
}
int check(uint64_t big)
{
    uint64_t l,i,ct=0;
    for(i=1;i<=sqrt(big);i++)
    {
        if(big%i==0){ct++;}
        if(big%(big/i)==0&&(big/i)!=i){ct++;}
    }
    return ct;
}
=======
#include<iostream>
#include<math.h>
#include<stdint.h>
using namespace std;
int check(uint64_t big);
int arr[171]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0};
int main()
{
    uint64_t l,r,i;
    int ct;
    int t,x;
    cin>>t;
    while(t--)
    {
        ct=0;
        cin>>l>>r;
        for(i=l;i<=r;i++)
        {
            x=check(i);
            if(arr[x])ct++;
        }
        cout<<ct<<endl;

    }
    return 0;
}
int check(uint64_t big)
{
    uint64_t l,i,ct=0;
    for(i=1;i<=sqrt(big);i++)
    {
        if(big%i==0){ct++;}
        if(big%(big/i)==0&&(big/i)!=i){ct++;}
    }
    return ct;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
