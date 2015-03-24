#include<bits/stdc++.h>
using namespace std;
unsigned long long int countbits(unsigned long long int i)
{
     i = i - ((i >> 1) & 0x55555555);
     i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
     return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}
int main()
{
	unsigned long long int n,i,ct,ans,x,*a;
    cin>>n;
	 a= new unsigned long long int[n];
	for(i = 0; i < n; i++)cin>>a[i];
	a[0]=countbits(a[0]);
	for(i = 1; i < n; i++)
	{
		a[i] = countbits(a[i]);
		ans^=a[i];
	}
	if(ans%2!=0)cout<<"Shaka :)\n";
	else cout<<"The other player :(\n";
	return 0;
}
