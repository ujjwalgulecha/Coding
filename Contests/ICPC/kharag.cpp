<<<<<<< HEAD
#include<iostream>
#include<math.h>
#include<stdint.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int t,m,i,a[101],b[101],j,n,flag,diff;
    cin>>t;
    while(t--)
    {
        int ct1=0,ct2=0;
        cin>>m;
        for(i=0;i<m;i++)
        cin>>a[i];
        cin>>n;
        for(i=0;i<n;i++)
        cin>>b[i];
        diff=n-m;
        if(diff<0)diff*=-1;

            for(i=0;i<m;i++)
            {
                flag=0;
                for(j=0;j<n;j++)
                {
                    if(a[i]==b[j]){flag=1;break;}
                }
                if(!flag)ct1++;
            }
            if (ct1<n)ct1+=diff;

            for(i=0;i<n;i++)
            {
                flag=0;
                for(j=0;j<m;j++)
                {
                    if(b[i]==a[j]){flag=1;break;}
                }
                if(!flag)ct2++;
            }
            if (ct2<m)ct2+=diff;

if(ct1<ct2)cout<<ct1<<endl;
else
cout<<ct2<<endl;
        }
}

=======
#include<iostream>
#include<math.h>
#include<stdint.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int t,m,i,a[101],b[101],j,n,flag,diff;
    cin>>t;
    while(t--)
    {
        int ct1=0,ct2=0;
        cin>>m;
        for(i=0;i<m;i++)
        cin>>a[i];
        cin>>n;
        for(i=0;i<n;i++)
        cin>>b[i];
        diff=n-m;
        if(diff<0)diff*=-1;

            for(i=0;i<m;i++)
            {
                flag=0;
                for(j=0;j<n;j++)
                {
                    if(a[i]==b[j]){flag=1;break;}
                }
                if(!flag)ct1++;
            }
            if (ct1<n)ct1+=diff;

            for(i=0;i<n;i++)
            {
                flag=0;
                for(j=0;j<m;j++)
                {
                    if(b[i]==a[j]){flag=1;break;}
                }
                if(!flag)ct2++;
            }
            if (ct2<m)ct2+=diff;

if(ct1<ct2)cout<<ct1<<endl;
else
cout<<ct2<<endl;
        }
}

>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
