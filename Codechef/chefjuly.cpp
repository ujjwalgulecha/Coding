<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
using namespace std;
int count;
int main()
{
    int t,a,b,k,z;
    cin>>t;
    while(t--)
    {
        count=0;
        z=0;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&k);
        for(i=a;i<=b;i++)
        {
            z+=func(i,k);
        }
        printf("%d\n",z);
    }
    return 0;
}

int func(int i,int k)
{
    int c,j;
    for(j=0;j<=i;j++)
    {
        if(isprime(j))c++;
    }
    if (c==k)
        return 1;
    else return 0;

}
=======
#include<iostream>
#include<stdio.h>
using namespace std;
int count;
int main()
{
    int t,a,b,k,z;
    cin>>t;
    while(t--)
    {
        count=0;
        z=0;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&k);
        for(i=a;i<=b;i++)
        {
            z+=func(i,k);
        }
        printf("%d\n",z);
    }
    return 0;
}

int func(int i,int k)
{
    int c,j;
    for(j=0;j<=i;j++)
    {
        if(isprime(j))c++;
    }
    if (c==k)
        return 1;
    else return 0;

}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
