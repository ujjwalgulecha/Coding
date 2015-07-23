<<<<<<< HEAD
#include<stdio.h>
#include<iostream>
using namespace std;
long long int hcf(long long int a,long long int b);
int main()
{
    long long int n,i,h,a[100001];
    cin>>n;
    for(i=0;i<n;i++)
            scanf("%lld",&a[i]) ;
            for(i=0;i<n-1;i++)
                {
                     h=hcf(a[i],a[i+1]);
                     a[i+1]=h;
                }
        if(h%2){cout<<h<<endl;}
        else
        {
            while((h%2)==0)
            {
                h/=2;
            }
            cout<<h<<endl;

        }
  }
       long long int hcf(long long int a,long long int b)
         {
              if(a%b==0)
               {
                      return b;
               }
              else
              {
                      return(hcf(b,a%b));
              }
         }
=======
#include<stdio.h>
#include<iostream>
using namespace std;
long long int hcf(long long int a,long long int b);
int main()
{
    long long int n,i,h,a[100001];
    cin>>n;
    for(i=0;i<n;i++)
            scanf("%lld",&a[i]) ;
            for(i=0;i<n-1;i++)
                {
                     h=hcf(a[i],a[i+1]);
                     a[i+1]=h;
                }
        if(h%2){cout<<h<<endl;}
        else
        {
            while((h%2)==0)
            {
                h/=2;
            }
            cout<<h<<endl;

        }
  }
       long long int hcf(long long int a,long long int b)
         {
              if(a%b==0)
               {
                      return b;
               }
              else
              {
                      return(hcf(b,a%b));
              }
         }
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
