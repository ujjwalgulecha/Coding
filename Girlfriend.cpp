#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,a,b,x,y;
    char str[100005];
    cin>>str;
    long long int len = strlen(str);
    cin>>q;
    while(q--)
    {
        cin>>a>>b;
        x=a%len;
        y=b%len;
        if(x==0)x=len-1;
        else if(x>0)x-=1;
        if(y==0)y=len-1;
        else if(y>0)y-=1;
        if(str[x]==str[y])cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
