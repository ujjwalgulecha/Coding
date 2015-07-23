<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
void ini(int *a);
int test(int x);
int main()
{
int a[10000],i,t,n,j,count;
ini(a);
cin>>t;
while(t--)
{
    cin>>n;
    count=0;
    for(i=0;;i++)
    {
        if(a[i]>n)break;
        if(test(n-a[i]))count++;
    }
    cout<<count<<endl;
}
return 0;
}
void ini(int *a)
{
    int i,j,k,flag;
    a[0]=2*2;
a[1]=3*2;
k=2;
for(i=4;i<10000;i++)
{
    for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
            {flag=1;break;}
        else {flag=0;continue;}
    }
    if (flag==0){a[k]=i*2;k++;}
}

}
int test(int x)
{
  int i,j;
  for(i=2;i<=sqrt(x);i++)
  {
      if(i%j==0)return 0;
  }
  return 1;
}
=======
#include<iostream>
#include<math.h>
using namespace std;
void ini(int *a);
int test(int x);
int main()
{
int a[10000],i,t,n,j,count;
ini(a);
cin>>t;
while(t--)
{
    cin>>n;
    count=0;
    for(i=0;;i++)
    {
        if(a[i]>n)break;
        if(test(n-a[i]))count++;
    }
    cout<<count<<endl;
}
return 0;
}
void ini(int *a)
{
    int i,j,k,flag;
    a[0]=2*2;
a[1]=3*2;
k=2;
for(i=4;i<10000;i++)
{
    for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
            {flag=1;break;}
        else {flag=0;continue;}
    }
    if (flag==0){a[k]=i*2;k++;}
}

}
int test(int x)
{
  int i,j;
  for(i=2;i<=sqrt(x);i++)
  {
      if(i%j==0)return 0;
  }
  return 1;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
