<<<<<<< HEAD
#include<iostream>
#include<algorithm>
using namespace std;
int n,k;
int compute();
int cal(int a[10000]);
int mim(int a,int b);
int main()
{
    int t,x,a[10000];
    cin>>t;
    x=t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);
       cout<<"Case #"<<x-t<<": "<<cal(a)%1000000007<<endl;
    }
    return 0;
}
 int cal(int a[10000])
 {
     int fin=compute();
     int sum=0,x=0,y;
     k--;
     while(1)
     {
         n--;
         y=compute();
         x+=y;
         if(x==fin){sum+=a[n]*y;break;}
         if(x>fin){sum+=a[n];break;}
         else
         sum+=a[n]*y;
     }
return sum;
 }
 int mim(int a,int b)
 {
     if(a>b)return b; else return a;
 }
int compute()
{
    int i,j;
    int b[100][100];
    for(i=0;i<=n;i++)
      {
          for(j=0;j<=mim(i,k);j++)
        {
            if(j==0||j==i)
            {
                b[i][j]=1;
            }
            else
                b[i][j]=b[i-1][j-1]+b[i-1][j];
        }
}
    return b[n][k];
}
=======
#include<iostream>
#include<algorithm>
using namespace std;
int n,k;
int compute();
int cal(int a[10000]);
int mim(int a,int b);
int main()
{
    int t,x,a[10000];
    cin>>t;
    x=t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);
       cout<<"Case #"<<x-t<<": "<<cal(a)%1000000007<<endl;
    }
    return 0;
}
 int cal(int a[10000])
 {
     int fin=compute();
     int sum=0,x=0,y;
     k--;
     while(1)
     {
         n--;
         y=compute();
         x+=y;
         if(x==fin){sum+=a[n]*y;break;}
         if(x>fin){sum+=a[n];break;}
         else
         sum+=a[n]*y;
     }
return sum;
 }
 int mim(int a,int b)
 {
     if(a>b)return b; else return a;
 }
int compute()
{
    int i,j;
    int b[100][100];
    for(i=0;i<=n;i++)
      {
          for(j=0;j<=mim(i,k);j++)
        {
            if(j==0||j==i)
            {
                b[i][j]=1;
            }
            else
                b[i][j]=b[i-1][j-1]+b[i-1][j];
        }
}
    return b[n][k];
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
