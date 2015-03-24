<<<<<<< HEAD
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int gcd(int m,int n);

int gcd(int m,int n)
{
     while(m!=n){
          if(m>n)
              return gcd(m-n,n);
          else
             return gcd(m,n-m);
     }
     return m;
}
int main()
{
    int t,n,x,i,a[1001],diff,flag=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
             cin>>a[i];
        for(i=0;i<n-1;i++)
            x=gcd(x,a[i]);
        cout<<x<<endl;
    }
    return 0;
}
=======
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int gcd(int m,int n);

int gcd(int m,int n)
{
     while(m!=n){
          if(m>n)
              return gcd(m-n,n);
          else
             return gcd(m,n-m);
     }
     return m;
}
int main()
{
    int t,n,x,i,a[1001],diff,flag=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
             cin>>a[i];
        for(i=0;i<n-1;i++)
            x=gcd(x,a[i]);
        cout<<x<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
