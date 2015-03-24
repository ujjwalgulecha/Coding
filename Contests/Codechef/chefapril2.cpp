<<<<<<< HEAD
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
void ini(int *a,bool *arr);
int main()
{
int i,t,j,n,count,a[10000];
bool arr[10000]={0};

ini(a,arr);
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    count=0;
    for(i=0;;i++)
    {
        j=n-(2*a[i]);
        if(j<0)break;
        if(arr[j]==1)count++;
    }
    printf("%d\n",count);
}
return 0;
}
void ini(int *a,bool *arr)
{
    int i,j,k,flag;
    a[0]=2;
a[1]=3;
k=2;
arr[2]=arr[3]=1;
for(i=4;i<=10000;i++)
{
    for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
            {flag=1;break;}
        else {flag=0;continue;}
    }
    if (flag==0){a[k]=i;arr[i]=1;k++;}
}
}

=======
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
void ini(int *a,bool *arr);
int main()
{
int i,t,j,n,count,a[10000];
bool arr[10000]={0};

ini(a,arr);
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    count=0;
    for(i=0;;i++)
    {
        j=n-(2*a[i]);
        if(j<0)break;
        if(arr[j]==1)count++;
    }
    printf("%d\n",count);
}
return 0;
}
void ini(int *a,bool *arr)
{
    int i,j,k,flag;
    a[0]=2;
a[1]=3;
k=2;
arr[2]=arr[3]=1;
for(i=4;i<=10000;i++)
{
    for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
            {flag=1;break;}
        else {flag=0;continue;}
    }
    if (flag==0){a[k]=i;arr[i]=1;k++;}
}
}

>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
