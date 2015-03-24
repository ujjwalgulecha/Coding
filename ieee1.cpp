#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[200000],cumu[200000]={0};
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    int sum=0,max=0;
    cumu[0]=a[0];
    for(i=1;i<n;i++)
    {
        cumu[i]=cumu[i-1]+a[i];
        //cout<<cumu[i]<<endl;
    }
    int chuth;
    int prevchuth=cumu[n-1];
    for(i=1;i<n;i++)
    {
       chuth=cumu[n-1]-cumu[i];
       if (chuth>prevchuth)prevchuth=chuth;
    }
    if(prevchuth<0)cout<<"0\n";
    else
    cout<<prevchuth<<endl;
}
