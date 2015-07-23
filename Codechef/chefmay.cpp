<<<<<<< HEAD
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int check(char a[25001],char b[25001]);
int main()
{
    int t;
    char a[25001],b[250001];
    cin>>t;
    while(t--)
    {
        scanf("%s %s",a,b);
        if(check(a,b))
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;

}
int check(char a[25001],char b[25001])
{
    int i,j=0;
    for(i=0;i<strlen(b);i++)
    {
        if(a[j]==b[i])
        {
            j++;
        }
    }
    if (j==strlen(a))return 1;
    else
    {
        j=0;
        for(i=0;i<strlen(a);i++)
    {
        if(b[j]==a[i])
        {
            j++;
        }
    }
    if (j==strlen(b))return 1;
    }
    return 0;
}
=======
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int check(char a[25001],char b[25001]);
int main()
{
    int t;
    char a[25001],b[250001];
    cin>>t;
    while(t--)
    {
        scanf("%s %s",a,b);
        if(check(a,b))
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;

}
int check(char a[25001],char b[25001])
{
    int i,j=0;
    for(i=0;i<strlen(b);i++)
    {
        if(a[j]==b[i])
        {
            j++;
        }
    }
    if (j==strlen(a))return 1;
    else
    {
        j=0;
        for(i=0;i<strlen(a);i++)
    {
        if(b[j]==a[i])
        {
            j++;
        }
    }
    if (j==strlen(b))return 1;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
