<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    unsigned long long int n,pass;
    int flag,ct;
    while(t--)
    {
        scanf("%lld",&n);
        if(n==1||n==2){cout<<"0\n";continue;}
        pass=0;
        ct=0;
        flag=0;
        for(;;)
        {

            if(n<=2&&ct==0)break;
           if(n%2!=0)
           {
               if(n+pass%2!=0)
               {
                   pass++;
                   ct++;
                   n-=1;
                   ct--;
               }
               n-=1;
               n/=2;
               pass++;
               ct++;
               continue;
           }
           else
            n/=2;

        }
        cout<<pass<<endl;


    }
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    unsigned long long int n,pass;
    int flag,ct;
    while(t--)
    {
        scanf("%lld",&n);
        if(n==1||n==2){cout<<"0\n";continue;}
        pass=0;
        ct=0;
        flag=0;
        for(;;)
        {

            if(n<=2&&ct==0)break;
           if(n%2!=0)
           {
               if(n+pass%2!=0)
               {
                   pass++;
                   ct++;
                   n-=1;
                   ct--;
               }
               n-=1;
               n/=2;
               pass++;
               ct++;
               continue;
           }
           else
            n/=2;

        }
        cout<<pass<<endl;


    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
