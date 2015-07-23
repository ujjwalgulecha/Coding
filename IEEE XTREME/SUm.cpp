#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
int main()
{
    ll n,i,q,k,sum;
    int *a;
    cin>>n;
    a = new int[n+1];
    int * b = new int [n+1];
    for(i=0;i<n;i++){cin>>a[i];}
    cin>>q;
    while(q--)
    {
        cin>>k;
        for(i=0;i<n;i++)b[i]=a[i];
        for(i=0;i<n;i++)
        {
            a[i]=((a[i]%MOD)+b[(n-k+i)%n]%MOD)%MOD;
        }
    }
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=((sum%MOD)+a[i]%MOD)%MOD;
        }
        cout<<sum<<endl;
        return 0;
}
