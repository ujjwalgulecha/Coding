<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
using namespace std;
long long int gcd(long long int a, long long int b);
long long int lcm(long long int a,long long int b);
long long int lcms(long long int n, long long int *month);
int main()
{
    long long int t,n,u,m,month[50],cost[50],i,x,med,low,count,tr;
    int choice;
    float drate,rate,lrate[50];
    cin>>t;
    while(t--)
    {
        i=0;
        cin>>drate>>u>>n;
        x=n;
        while(x--)
        {
            cin>>month[i]>>lrate[i]>>cost[i];
            i++;
        }
        choice=0;
        med=lcms(n,month);
        low=drate*u*med;
        for(i=0;i<n;i++)
        {
            if(med==month[i])count=med;
            else
            count=med/month[i];
           // cout<<count<<endl;
            tr=(count*u*lrate[i])+(cost[i]*(med/count));
          // cout<<"cost of plan "<<i<<" "<<tr<<endl;
            if (tr<low){low=tr;choice=i+1;}
        }
        cout<<choice<<endl;
    }
    return 0;
}
long long int gcd(long long int a, long long int b)
{
  if (b==0)
    return a;
  else
    return gcd(b,a%b);
}

long long int lcm(long long int a, long long int b)
{
  return (a*b)/gcd(a,b);
}
long long int lcms(long long int n, long long int *month)
{
        int     i, result;
        result = 1;
        for (i = 0; i < n; i++) result = lcm(result, month[i]);
        return result;
}
=======
#include<iostream>
#include<stdio.h>
using namespace std;
long long int gcd(long long int a, long long int b);
long long int lcm(long long int a,long long int b);
long long int lcms(long long int n, long long int *month);
int main()
{
    long long int t,n,u,m,month[50],cost[50],i,x,med,low,count,tr;
    int choice;
    float drate,rate,lrate[50];
    cin>>t;
    while(t--)
    {
        i=0;
        cin>>drate>>u>>n;
        x=n;
        while(x--)
        {
            cin>>month[i]>>lrate[i]>>cost[i];
            i++;
        }
        choice=0;
        med=lcms(n,month);
        low=drate*u*med;
        for(i=0;i<n;i++)
        {
            if(med==month[i])count=med;
            else
            count=med/month[i];
           // cout<<count<<endl;
            tr=(count*u*lrate[i])+(cost[i]*(med/count));
          // cout<<"cost of plan "<<i<<" "<<tr<<endl;
            if (tr<low){low=tr;choice=i+1;}
        }
        cout<<choice<<endl;
    }
    return 0;
}
long long int gcd(long long int a, long long int b)
{
  if (b==0)
    return a;
  else
    return gcd(b,a%b);
}

long long int lcm(long long int a, long long int b)
{
  return (a*b)/gcd(a,b);
}
long long int lcms(long long int n, long long int *month)
{
        int     i, result;
        result = 1;
        for (i = 0; i < n; i++) result = lcm(result, month[i]);
        return result;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
