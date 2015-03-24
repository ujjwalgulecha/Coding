<<<<<<< HEAD
/*
1.generate list of all prime numbers less than 500000
2.for p in primes
*/





#include<iostream>
#include<stdio.h>
using namespace std;
int check(long long int n);
bool ctf(long long int i);
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        printf("%d\n",check(n));
    }
    return 0;
}
int check(long long int n)
{
    if(n==4||n==7)return 1;
    long long int i,ct=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            if(ctf(i))
                ct++;
        }
    }
    return ct;
}
bool ctf(long long int i)
{
    int j,flag=0;
    while(i!=0)
    {
        j=i%10;
        if(j==7||j==4){flag=1;break;}
        i/=10;
    }
    if(flag==0)return 0;
    else return 1;
}


=======
/*
1.generate list of all prime numbers less than 500000
2.for p in primes
*/





#include<iostream>
#include<stdio.h>
using namespace std;
int check(long long int n);
bool ctf(long long int i);
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        printf("%d\n",check(n));
    }
    return 0;
}
int check(long long int n)
{
    if(n==4||n==7)return 1;
    long long int i,ct=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            if(ctf(i))
                ct++;
        }
    }
    return ct;
}
bool ctf(long long int i)
{
    int j,flag=0;
    while(i!=0)
    {
        j=i%10;
        if(j==7||j==4){flag=1;break;}
        i/=10;
    }
    if(flag==0)return 0;
    else return 1;
}


>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
