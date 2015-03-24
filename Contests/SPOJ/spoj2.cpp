<<<<<<< HEAD
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,x,y,i,j;
    int flag,t;
    cin>>t;
    while(t--)
    {
        scanf("%lld %lld",&x,&y);
        for(i=2;i<=y;i++)
        {
            flag=1;
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)flag=0;
            }
            if(flag==1&&i>=x)cout<<i<<endl;
        }
        cout<<endl;

    }
    return 0;
}
=======
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,x,y,i,j;
    int flag,t;
    cin>>t;
    while(t--)
    {
        scanf("%lld %lld",&x,&y);
        for(i=2;i<=y;i++)
        {
            flag=1;
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)flag=0;
            }
            if(flag==1&&i>=x)cout<<i<<endl;
        }
        cout<<endl;

    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
