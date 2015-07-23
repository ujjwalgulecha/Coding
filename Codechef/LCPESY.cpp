<<<<<<< HEAD
#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,ct,x,y,i,p,j;
    cin>>t;
    char a[10001],b[10001];
    while(t--)
    {
        ct=0;
        int store[61]={0};
        cin>>a>>b;
        x=strlen(a);
        y=strlen(b);
        for(i=0;i<x;i++)
        {
            p=(int)a[i];
            //cout<<p<<endl;
            //cout<<p<<endl;
            if(p>=65&&p<=90)
                store[p-39]++;
            if(p>=97&&p<=122)
                store[p-97]++;
            if(p>=48&&p<=57)
                store[p+4]++;
        }
      // for(i=0;i<61;i++)cout<<store[i]<<endl;
     // cout<<store[53]<<" "<<store[54]<<endl;
        for(i=0;i<y;i++)
        {
            p=(int)b[i];
            if(p>=65&&p<=90)
            {
                if(--(store[p-39])>=0)
                {
                    ct++;
                }
            }

            if(p>=97&&p<=122)
               {
                   if(--(store[p-97])>=0)
                {
                    ct++;
                }
               }
            if(p>=48&&p<=57){
               if(--(store[p+4])>=0)
                {
                    ct++;
                }
            }
        }
    cout<<ct<<endl;
    }
    return 0;
}
=======
#include<algorithm>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,ct,x,y,i,p,j;
    cin>>t;
    char a[10001],b[10001];
    while(t--)
    {
        ct=0;
        int store[61]={0};
        cin>>a>>b;
        x=strlen(a);
        y=strlen(b);
        for(i=0;i<x;i++)
        {
            p=(int)a[i];
            //cout<<p<<endl;
            //cout<<p<<endl;
            if(p>=65&&p<=90)
                store[p-39]++;
            if(p>=97&&p<=122)
                store[p-97]++;
            if(p>=48&&p<=57)
                store[p+4]++;
        }
      // for(i=0;i<61;i++)cout<<store[i]<<endl;
     // cout<<store[53]<<" "<<store[54]<<endl;
        for(i=0;i<y;i++)
        {
            p=(int)b[i];
            if(p>=65&&p<=90)
            {
                if(--(store[p-39])>=0)
                {
                    ct++;
                }
            }

            if(p>=97&&p<=122)
               {
                   if(--(store[p-97])>=0)
                {
                    ct++;
                }
               }
            if(p>=48&&p<=57){
               if(--(store[p+4])>=0)
                {
                    ct++;
                }
            }
        }
    cout<<ct<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
