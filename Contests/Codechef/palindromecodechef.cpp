<<<<<<< HEAD
#include<iostream>
#include<stdlib.h>
using namespace std;
int palin(unsigned long int);
unsigned long int fact(unsigned long int);
int main()
{
    int n;
    unsigned long int a[100],b;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        b=a[i];
        palin(b);
    }
    return 0;
}
int palin(unsigned long int b)
{
    unsigned long int a,sum=b;
   a=fact(sum);
    if (a==b)
    {
    cout<<a;
    return 0;
    }
    else
    {
        sum=a+b;
        fact(sum);
    }
}
unsigned long int fact(unsigned long int b)
 {
    unsigned long int a,z,x;
    x=b;
    while(x!=0)
    {
        z=x%10;
        a=(a*10)+z;
        x/=10;
    }
    return a;
 }
=======
#include<iostream>
#include<stdlib.h>
using namespace std;
int palin(unsigned long int);
unsigned long int fact(unsigned long int);
int main()
{
    int n;
    unsigned long int a[100],b;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        b=a[i];
        palin(b);
    }
    return 0;
}
int palin(unsigned long int b)
{
    unsigned long int a,sum=b;
   a=fact(sum);
    if (a==b)
    {
    cout<<a;
    return 0;
    }
    else
    {
        sum=a+b;
        fact(sum);
    }
}
unsigned long int fact(unsigned long int b)
 {
    unsigned long int a,z,x;
    x=b;
    while(x!=0)
    {
        z=x%10;
        a=(a*10)+z;
        x/=10;
    }
    return a;
 }
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
