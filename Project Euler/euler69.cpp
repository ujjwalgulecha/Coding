<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
void gen(int a[10000]);
int main()
{
    int a[10000],i;
    gen(a);
    int sum=1;
   for(i=0;sum<=100000;i++)
    {
            sum=sum*a[i];
    }
    cout<<sum;
    return 0;
}
void gen(int a[10000])
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
    if (flag==0)
    {
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
int main()
{
    int a[10000],i;
    gen(a);
    int sum=1;
   for(i=0;sum<=100000;i++)
    {
            sum=sum*a[i];
    }
    cout<<sum;
    return 0;
}
void gen(int a[10000])
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
    if (flag==0)
    {
        a[k]=i;
        k++;
    }
}
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
