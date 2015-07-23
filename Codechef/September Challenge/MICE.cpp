#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,i;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=sqrt(n);i>=1;i--)
        {
            if(n%i==0)
            {
                cout<<"2\n";
                cout<<i<<endl;
                cout<<n/i<<endl;
            }
        }
    }
    return 0;
}
