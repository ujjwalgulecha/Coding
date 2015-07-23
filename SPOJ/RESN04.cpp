<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,sum,n,i,a[1001];
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i]/=i;
            sum+=a[i];
        }
        if(sum%2==0)cout<<"BOB\n";
        else cout<<"ALICE\n";
    }
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,sum,n,i,a[1001];
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i]/=i;
            sum+=a[i];
        }
        if(sum%2==0)cout<<"BOB\n";
        else cout<<"ALICE\n";
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
