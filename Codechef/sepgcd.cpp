<<<<<<< HEAD
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
long long int gcd(long long int x,long long int y);
int main()
{
    int t;
    long long int n,den,num,i,j,temp;
    cin>>t;
    while(t--)
    {
        num=0;
        cin>>n;
        den=n*n;
        if(n!=1)
		{
			num=n+1;
			for(i=2;i<n;i++)
			{
				num+= (n/i);
			}
			den = n*n;
        temp=gcd(num,den);
        num/=temp;
        den/=temp;
        cout<<num<<"/"<<den<<endl;
		}
		else
			cout<<"1/1"<<endl;
    }
    return 0;
}
long long int gcd(long long int x,long long int y)
{
    while (x * y != 0) {
        if (x >= y) x = x % y;
        else y = y % x;
    }
    return x+y;
}
=======
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
long long int gcd(long long int x,long long int y);
int main()
{
    int t;
    long long int n,den,num,i,j,temp;
    cin>>t;
    while(t--)
    {
        num=0;
        cin>>n;
        den=n*n;
        if(n!=1)
		{
			num=n+1;
			for(i=2;i<n;i++)
			{
				num+= (n/i);
			}
			den = n*n;
        temp=gcd(num,den);
        num/=temp;
        den/=temp;
        cout<<num<<"/"<<den<<endl;
		}
		else
			cout<<"1/1"<<endl;
    }
    return 0;
}
long long int gcd(long long int x,long long int y)
{
    while (x * y != 0) {
        if (x >= y) x = x % y;
        else y = y % x;
    }
    return x+y;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
