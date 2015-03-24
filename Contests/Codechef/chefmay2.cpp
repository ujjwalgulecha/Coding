<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int check(char a[400002],char b[200001],int num);
struct abc
{
    char s[200001];
}p[1001];
int main()
{
    int t,num,i;
    cin>>t;
    char a[400002],b[200001];
    while(t--)
    {
        scanf("%s %s",a,b);
        strcat(a,b);
        cin>>num;
        for(i=0;i<num;i++)
            scanf("%s",p[i].s);
        if(check(a,b,num))cout<<"YES\n";
            else cout<<"NO\n";
    }
    return 0;
}
int check(char a[400002],char b[200001],int num)
{
    int n,i,n1;
    char c[400002]={0};
    n=strlen(a);
    sort(a,a+n);
    for(i=0;i<num;i++)
    {
        strcat(c,p[i].s);
    }
    n1=strlen(c);
    sort(c,c+n1);
    int j=0;
    for(i=0;i<strlen(a);i++)
    {
        if(c[j]==a[i])
        {
            j++;
        }
    }
    if (j==n1)return 1;
    else return 0;
}
=======
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int check(char a[400002],char b[200001],int num);
struct abc
{
    char s[200001];
}p[1001];
int main()
{
    int t,num,i;
    cin>>t;
    char a[400002],b[200001];
    while(t--)
    {
        scanf("%s %s",a,b);
        strcat(a,b);
        cin>>num;
        for(i=0;i<num;i++)
            scanf("%s",p[i].s);
        if(check(a,b,num))cout<<"YES\n";
            else cout<<"NO\n";
    }
    return 0;
}
int check(char a[400002],char b[200001],int num)
{
    int n,i,n1;
    char c[400002]={0};
    n=strlen(a);
    sort(a,a+n);
    for(i=0;i<num;i++)
    {
        strcat(c,p[i].s);
    }
    n1=strlen(c);
    sort(c,c+n1);
    int j=0;
    for(i=0;i<strlen(a);i++)
    {
        if(c[j]==a[i])
        {
            j++;
        }
    }
    if (j==n1)return 1;
    else return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
