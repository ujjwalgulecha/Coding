<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
double check(double b[100001],int l,int r,int n,double c[100001]);
int main()
{

    int n,q,i,l,r;
    double b[100001],c[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%lf",&b[i]);
        }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
      scanf("%d %d",&l,&r);
      printf("%0.1lf\n",check(b,l,r,n,c));
    }
    return 0;

}

double check(double b[100001],int l,int r,int n,double c[100001])
{
        int i,max,y,x,z;
    for(i=0;i<n;i++)
        c[i]=b[i];
    double sum=0.0;
    sort(c+l,c+r+1);
    sum+=c[l];
    y=0;
    for(i=r;i>=l;i--)
    {
        if(c[i]>sum)
        {
            y=(c[i]-sum)/2;
            break;
        }
    }
    sort(c,c+l);
    sort(c+r+1,c+n);
    if(l>0)
    x=c[l-1];
    else x=0;
    if (r==n-1)
    {
        z=0;
    }
    else
    z=c[n-1];
    sum+= x > y ? ( x > z ? x: z ) : ( y > z ? y : z ) ;
    return sum;
}
=======
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
double check(double b[100001],int l,int r,int n,double c[100001]);
int main()
{

    int n,q,i,l,r;
    double b[100001],c[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%lf",&b[i]);
        }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
      scanf("%d %d",&l,&r);
      printf("%0.1lf\n",check(b,l,r,n,c));
    }
    return 0;

}

double check(double b[100001],int l,int r,int n,double c[100001])
{
        int i,max,y,x,z;
    for(i=0;i<n;i++)
        c[i]=b[i];
    double sum=0.0;
    sort(c+l,c+r+1);
    sum+=c[l];
    y=0;
    for(i=r;i>=l;i--)
    {
        if(c[i]>sum)
        {
            y=(c[i]-sum)/2;
            break;
        }
    }
    sort(c,c+l);
    sort(c+r+1,c+n);
    if(l>0)
    x=c[l-1];
    else x=0;
    if (r==n-1)
    {
        z=0;
    }
    else
    z=c[n-1];
    sum+= x > y ? ( x > z ? x: z ) : ( y > z ? y : z ) ;
    return sum;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
