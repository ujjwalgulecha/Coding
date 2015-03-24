#include<bits/stdc++.h>
using namespace std;
int abs(int a ,int b)
{
    if(a>b)return a-b;
    else return b-a;
}
int main()
{
    long long int t,i,n,x,maxi;
    cin>>t;
    int *pos,*hol;
    while(t--)
    {
        maxi=0;
        cin>>n;
        pos = new int[n];
        hol = new int[n];
        for(i=0;i<n;i++)
            cin>>pos[i];
        for(i=0;i<n;i++)
            cin>>hol[i];

        sort(pos,pos+n);
        sort(hol,hol+n);
        for(i=0;i<n;i++)
        {
			x=abs(hol[i],pos[i]);
			maxi = max(maxi,x);
		}
		cout<<maxi<<endl;
    }
    return 0;
}
