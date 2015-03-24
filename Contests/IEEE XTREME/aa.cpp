#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,k,count=0,x=0,y=0;
    ll largest=0;
    char a[500];
    ll c[500],d[500];
    ll b[500][500],q;
    cin>>k;
    cin.getline (a,500);
    n=strlen(a);
    for(ll i=0;i<n;i++)
    {
        if(a[i]!=' ')
        {
            b[y][count++]=a[i]-'0';
        }
    }
    d[y]=count;
    ll count1=1;
    while(k--)
    {
    for(ll i=0;i<count;i++)
    {
        if(b[y][i]==b[y][i+1])
        {
            count1++;
        }
        else
        {
            b[y+1][x++]=count1;
            b[y+1][x++]=b[y][i];

            count1=1;
        }
    }
        count=x;
        count1=1;
        d[y+1]=x;
        x=0;
        y++;
    }
    for(ll i=0;i<y+1;i++)
    {
        if(d[i]>largest)
            largest=d[i];
    }
    for(ll i=0;i<y+1;i++)
    {
        ll m=largest-d[i];
        for(ll j=0;j<m;j++)
        {
            cout<<".";
        }
        for(ll j=0;j<d[i];j++)
        {
            if(j==d[i]-1)
                cout<<b[i][j]<<" ";
            else
            cout<<b[i][j]<<" ";

        }
        for(ll j=0;j<m;j++)
        {
           cout<<".";
        }
        cout<<endl;
    }
    cout<<d[y]<<endl;
    return 0;
}
