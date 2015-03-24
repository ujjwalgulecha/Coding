<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
bool check(int i);
int main()
{
int t,n,sq;
int i,ct;
cin>>t;
while(t--)
{
    cin>>n;
    sq=(int)sqrt(n);
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
bool check(int i)
{
	while(i>0)
    {
		if(i%10 == 4 || i%10 ==7) return 1;
		i/=10;
	}
	return 0;
}
=======
#include<iostream>
#include<math.h>
using namespace std;
bool check(int i);
int main()
{
int t,n,sq;
int i,ct;
cin>>t;
while(t--)
{
    cin>>n;
    sq=(int)sqrt(n);
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
bool check(int i)
{
	while(i>0)
    {
		if(i%10 == 4 || i%10 ==7) return 1;
		i/=10;
	}
	return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
