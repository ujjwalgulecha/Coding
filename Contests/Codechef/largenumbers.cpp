<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    long long int t,n,a,b,c,d,i,sum,ans,final,finals,k;
    cin>>t;
    while(t--)
    {
        final=0;
        sum=0;
       scanf("%lld %lld %lld %lld %lld",&n,&a,&b,&c,&d);
        long long int store[1000001]={0};
        store[d]++;
        k=d;
        finals=0;
        for(i=1;i<n;i++)
        {
            ans=0;
            ans=(ans+((a*k*k)%1000000))%1000000;
            ans=(ans+((b*k)%1000000))%1000000;
            ans=(ans+c)%1000000;
            k=ans;
            store[ans]++;
        }
        int flag=0;
        for(i = 0; i < 1000000; i++)
        {
            if(store[i] % 2 == 0)
			continue;
            if(flag == 0)
            {
                flag = 1;
                finals += i;
            }
            else
            {
                flag=0;
                finals -= i;
            }
        }
        if(finals>0)cout<<finals<<endl;
        else cout<<(-1*finals)<<endl;

    }
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    long long int t,n,a,b,c,d,i,sum,ans,final,finals,k;
    cin>>t;
    while(t--)
    {
        final=0;
        sum=0;
       scanf("%lld %lld %lld %lld %lld",&n,&a,&b,&c,&d);
        long long int store[1000001]={0};
        store[d]++;
        k=d;
        finals=0;
        for(i=1;i<n;i++)
        {
            ans=0;
            ans=(ans+((a*k*k)%1000000))%1000000;
            ans=(ans+((b*k)%1000000))%1000000;
            ans=(ans+c)%1000000;
            k=ans;
            store[ans]++;
        }
        int flag=0;
        for(i = 0; i < 1000000; i++)
        {
            if(store[i] % 2 == 0)
			continue;
            if(flag == 0)
            {
                flag = 1;
                finals += i;
            }
            else
            {
                flag=0;
                finals -= i;
            }
        }
        if(finals>0)cout<<finals<<endl;
        else cout<<(-1*finals)<<endl;

    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
