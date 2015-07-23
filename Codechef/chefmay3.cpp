<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
double check(double b[100001],int l,int r,int n);
int main()
{

    int n,q,i,l,r;
    double b[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lf",&b[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
      scanf("%d %d",&l,&r);
      printf("%0.1lf\n",check(b,l,r,n));
    }
    return 0;

}

double check(double b[100001],int l,int r,int n)
{
    int x;
    double c[100001];
    double max=0.0,max2=0.0,max3=0.0,maxi=0.0;
    double small=b[l];
    int i;
    for(i=l;i<=r;i++)
    {
        if (b[i]<small)
            small=b[i];
    }

    x=r-l+1;
    maxi+=small;

    int j=0;
    for(i=l;i<=r;i++)
    {
        c[j]=(b[i]-small)/2;
        j++;
    }
    for(i=0;i<x;i++)
    {
        if(c[i]>max)
            max=c[i];
    }

    for(i=0;i<l;i++)
    {
        if(b[i]>max2)
            max2=b[i];
    }

    for(i=r+1;i<n;i++)
    {
        if(b[i]>max3)
            max3=b[i];
    }

    if (max>max2&&max>max3){maxi+=max;}
    else if(max2>max&&max2>max3){maxi+=max2;}
    else {maxi+=max3;}
    return maxi;
}
=======
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
double check(double b[100001],int l,int r,int n);
int main()
{

    int n,q,i,l,r;
    double b[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lf",&b[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
      scanf("%d %d",&l,&r);
      printf("%0.1lf\n",check(b,l,r,n));
    }
    return 0;

}

double check(double b[100001],int l,int r,int n)
{
    int x;
    double c[100001];
    double max=0.0,max2=0.0,max3=0.0,maxi=0.0;
    double small=b[l];
    int i;
    for(i=l;i<=r;i++)
    {
        if (b[i]<small)
            small=b[i];
    }

    x=r-l+1;
    maxi+=small;

    int j=0;
    for(i=l;i<=r;i++)
    {
        c[j]=(b[i]-small)/2;
        j++;
    }
    for(i=0;i<x;i++)
    {
        if(c[i]>max)
            max=c[i];
    }

    for(i=0;i<l;i++)
    {
        if(b[i]>max2)
            max2=b[i];
    }

    for(i=r+1;i<n;i++)
    {
        if(b[i]>max3)
            max3=b[i];
    }

    if (max>max2&&max>max3){maxi+=max;}
    else if(max2>max&&max2>max3){maxi+=max2;}
    else {maxi+=max3;}
    return maxi;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
