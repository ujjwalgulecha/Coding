<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
bool test(int i);
int main()
{
    int t;
    cin>>t;
    int ct,x,y,i;
    while(t--)
    {
        ct=0;
        cin>>x>>y;
        for(i=x;i<=y;i++)
        {
            if(test(i))ct++;
        }
        cout<<ct<<endl;
    }
}
bool test(int i)
{
    char buffer[50];
    int f,j,x,y;
    sprintf(buffer,"%d",i);
    x=strlen(buffer);
    if(x==1)return false;
    y=x;
    f=1;
    for(int j=0;j<=x/2;j++)
    {
        if(buffer[j]!=buffer[y-1]){f=0;break;}
        y--;
    }
    if(f==1){cout<<i<<endl;return 1; }else return 0;
}
=======
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
bool test(int i);
int main()
{
    int t;
    cin>>t;
    int ct,x,y,i;
    while(t--)
    {
        ct=0;
        cin>>x>>y;
        for(i=x;i<=y;i++)
        {
            if(test(i))ct++;
        }
        cout<<ct<<endl;
    }
}
bool test(int i)
{
    char buffer[50];
    int f,j,x,y;
    sprintf(buffer,"%d",i);
    x=strlen(buffer);
    if(x==1)return false;
    y=x;
    f=1;
    for(int j=0;j<=x/2;j++)
    {
        if(buffer[j]!=buffer[y-1]){f=0;break;}
        y--;
    }
    if(f==1){cout<<i<<endl;return 1; }else return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
