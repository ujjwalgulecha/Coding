<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
void gen(int a[10000]);
int isprime(int x);
int main()
{
    int i,sum=0,a[10000],good;
    gen(a);
    for(i=0;;i++)
       {
        if(sum>1000000)
            break;
        good=sum;
        sum+=a[i];
       }
       i=0;
     while(1)
       {
           if(isprime(good)==1)
            break;
            good=good-a[i];
            i++;
       }
    cout<<good;

    return 0;
}
int isprime(int x)
{
    int i,count=0;
    for(i=2;i<=x/2;i++){
        if(x%i==0){
         count++;
            break;
        }
}
if(count==0 && x!= 1) return 1;
else return 0;
}

void gen(int a[10000])
{int i,j,flag,k=2,count=2;
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
    if (flag==0){
            a[k]=i;
            k++;
    }
}
}
=======
#include<iostream>
#include<math.h>
using namespace std;
void gen(int a[10000]);
int isprime(int x);
int main()
{
    int i,sum=0,a[10000],good;
    gen(a);
    for(i=0;;i++)
       {
        if(sum>1000000)
            break;
        good=sum;
        sum+=a[i];
       }
       i=0;
     while(1)
       {
           if(isprime(good)==1)
            break;
            good=good-a[i];
            i++;
       }
    cout<<good;

    return 0;
}
int isprime(int x)
{
    int i,count=0;
    for(i=2;i<=x/2;i++){
        if(x%i==0){
         count++;
            break;
        }
}
if(count==0 && x!= 1) return 1;
else return 0;
}

void gen(int a[10000])
{int i,j,flag,k=2,count=2;
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
    if (flag==0){
            a[k]=i;
            k++;
    }
}
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
