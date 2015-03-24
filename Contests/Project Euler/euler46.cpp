<<<<<<< HEAD
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int isprime(int x);
void gen(int *a);
int main()
{
    int a[100000];
    gen(a);
    int i,j,x,flag=0;
    float n;
    for(x=1;;x+=2)
    {
        for(i=0;a[i]<x;i++)
        {
            n=sqrt((x-a[i])/2);
            if(n==(int)n)
            {
                flag=0;
                break;
            }
            else flag=1;
        }
        if (flag==1)
        {
            if(!isprime(x))
                {cout<<x<<endl;exit(0);}
        }
    }
    return 0;
}
void gen(int *a)
{
    int i,j,k=2,flag;
a[0]=2;
a[1]=3;
for(i=4;i<100000;i++)
{
    for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
            {flag=1;break;}
        else {flag=0;continue;}
    }
    if (flag==0){a[k]=i;k++;}
    }
}
int isprime(int x)
{
    int i,j,flag,count=0;
    for(i=2;i<=x/2;i++){
        if(x%i==0){
         count++;
            break;
        }
    }
   if(count==0 && x!= 1)
    return 1;
   else return 0;
}
=======
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int isprime(int x);
void gen(int *a);
int main()
{
    int a[100000];
    gen(a);
    int i,j,x,flag=0;
    float n;
    for(x=1;;x+=2)
    {
        for(i=0;a[i]<x;i++)
        {
            n=sqrt((x-a[i])/2);
            if(n==(int)n)
            {
                flag=0;
                break;
            }
            else flag=1;
        }
        if (flag==1)
        {
            if(!isprime(x))
                {cout<<x<<endl;exit(0);}
        }
    }
    return 0;
}
void gen(int *a)
{
    int i,j,k=2,flag;
a[0]=2;
a[1]=3;
for(i=4;i<100000;i++)
{
    for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
            {flag=1;break;}
        else {flag=0;continue;}
    }
    if (flag==0){a[k]=i;k++;}
    }
}
int isprime(int x)
{
    int i,j,flag,count=0;
    for(i=2;i<=x/2;i++){
        if(x%i==0){
         count++;
            break;
        }
    }
   if(count==0 && x!= 1)
    return 1;
   else return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
