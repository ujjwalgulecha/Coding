<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
using namespace std;
int main()
{
    long long int t,n,k,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k==0){cout<<k<<" "<<n<<endl;}
        else if(n==0&&k==0){cout<<"0 0"<<endl;}
        else
        {
           a=n/k;
           b=a*k;
           cout<<a<<" "<<n-b<<endl;
        }
    }
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
using namespace std;
int main()
{
    long long int t,n,k,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k==0){cout<<k<<" "<<n<<endl;}
        else if(n==0&&k==0){cout<<"0 0"<<endl;}
        else
        {
           a=n/k;
           b=a*k;
           cout<<a<<" "<<n-b<<endl;
        }
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
