#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100005],n,m,t,d,i,diff=0;
    char ch;
    cin>>n>>m;
    for(i=1;i<=n;i++)cin>>a[i];
    while(m--)
    {
       cin>>ch>>d;
       if(ch=='C')diff=(diff+d)%n;
       else if(ch=='A')diff=(diff+n-d)%n;
        else
        {
            t=(diff+d)%n;
            if(t==0)t=n;
            cout<<a[t]<<endl;
        }

    }
    return 0;
}
