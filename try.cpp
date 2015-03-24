#include <iostream>
using namespace std;
int main()
{
    long long int t,i,a,b,m,ct;
    cin>>t;
    while(t--)
    {
    	ct=0;
    	cin>>a>>b>>m;
    	i=a;
    	if(i%m==0)
    	{
    		for(;i<=b;i+=m)++ct;
    	}
    	else
    	{
    		i+=(a/m);
    		for(;i<=b;i+=m)++ct;
    	}
    	cout<<ct<<endl;
    }
    return 0;
}
