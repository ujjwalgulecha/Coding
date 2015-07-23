<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
bool check(long long int i);
int main()
{
long long int t,n,sq;
long long int i,ct;
cin>>t;
while(t--)
{
    cin>>n;
    sq=(long long int)sqrt(n);
    ct=0;
    for(i=1;i<=sq;++i)
    {
        if(n%i==0)
        {
            if(check(i))ct++;
            if(i!=(n/i))
            {if(check(n/i))ct++;}
        }
    }
  /*  while(n!=0)
    {
        if(n%10==4||n%10==7){break;ct++;}
        n/=10;
    }
    */
    cout<<ct<<endl;

	}

	return 0;
}
bool check(long long int i)
{
	while(i>0)
    {
		if(i%10 == 3 || i%10 ==5|| i%10==6) return 1;
		i/=10;
	}
	return 0;
}
=======
#include<iostream>
#include<math.h>
using namespace std;
bool check(long long int i);
int main()
{
long long int t,n,sq;
long long int i,ct;
cin>>t;
while(t--)
{
    cin>>n;
    sq=(long long int)sqrt(n);
    ct=0;
    for(i=1;i<=sq;++i)
    {
        if(n%i==0)
        {
            if(check(i))ct++;
            if(i!=(n/i))
            {if(check(n/i))ct++;}
        }
    }
  /*  while(n!=0)
    {
        if(n%10==4||n%10==7){break;ct++;}
        n/=10;
    }
    */
    cout<<ct<<endl;

	}

	return 0;
}
bool check(long long int i)
{
	while(i>0)
    {
		if(i%10 == 3 || i%10 ==5|| i%10==6) return 1;
		i/=10;
	}
	return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
