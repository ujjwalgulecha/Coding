#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x1,x2,y1,y2,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>x1>>y1>>x2>>y2;
        cout<<min(min(abs(x-x1),abs(y-y1)),min(abs(x2-x),abs(y2-y)))<<endl;
    }
    return 0;
}
