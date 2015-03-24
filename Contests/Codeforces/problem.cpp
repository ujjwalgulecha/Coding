<<<<<<< HEAD
/*A vampire number has an even number of digits and is formed by multiplying a pair of numbers containing half the number of digits of the result. The digits are taken from the original number in any order. Pairs of trailing zeroes are not allowed. Example include:
1260 = 21 * 60
1827 = 21 * 87
2187 = 27 * 81
-Ujjwal Gulecha
*/
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
bool check(int a,int b);
int t;
int ct=0;
int num[10]={0};
bool check(int a,int b);
int main()
{
    int i,flag=0,a,x,n;
    cin>>t;
    x=t;
    while(x!=0)
    {
        a=x%10;
        ct++;
        num[a]++;
        x/=10;
    }
    n=sqrt(t);
    for(i=1;i<=n;i++)
    {
        if(t%i==0)
        {
            if(check(i,t/i)){cout<<i<<" "<<t/i<<endl;flag=1;}
        }
    }
    if(flag)cout<<"yes\n";
    else cout<<"no\n";
    return 0;
}
bool check(int a,int b)
{
    int x,y,i,ct1=0,ct2=0;
    int num1[10]={0};
    while(a!=0)
    {
        x=a%10;
        ct1++;
        num1[x]++;
        a/=10;
    }
    if(ct1!=ct/2)return 0;
     while(b!=0)
    {
        y=b%10;
        ct2++;
        num1[y]++;
        b/=10;
    }
    if(ct2!=ct/2)return 0;
    for(i=0;i<10;i++)
    {
        if(num[i]!=num1[i])return 0;
    }
    return 1;
}
=======
/*A vampire number has an even number of digits and is formed by multiplying a pair of numbers containing half the number of digits of the result. The digits are taken from the original number in any order. Pairs of trailing zeroes are not allowed. Example include:
1260 = 21 * 60
1827 = 21 * 87
2187 = 27 * 81
-Ujjwal Gulecha
*/
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
bool check(int a,int b);
int t;
int ct=0;
int num[10]={0};
bool check(int a,int b);
int main()
{
    int i,flag=0,a,x,n;
    cin>>t;
    x=t;
    while(x!=0)
    {
        a=x%10;
        ct++;
        num[a]++;
        x/=10;
    }
    n=sqrt(t);
    for(i=1;i<=n;i++)
    {
        if(t%i==0)
        {
            if(check(i,t/i)){cout<<i<<" "<<t/i<<endl;flag=1;}
        }
    }
    if(flag)cout<<"yes\n";
    else cout<<"no\n";
    return 0;
}
bool check(int a,int b)
{
    int x,y,i,ct1=0,ct2=0;
    int num1[10]={0};
    while(a!=0)
    {
        x=a%10;
        ct1++;
        num1[x]++;
        a/=10;
    }
    if(ct1!=ct/2)return 0;
     while(b!=0)
    {
        y=b%10;
        ct2++;
        num1[y]++;
        b/=10;
    }
    if(ct2!=ct/2)return 0;
    for(i=0;i<10;i++)
    {
        if(num[i]!=num1[i])return 0;
    }
    return 1;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
