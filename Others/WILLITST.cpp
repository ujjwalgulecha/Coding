#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin>>x;
    if(!(x&(x-1)))
    cout<<"TAK\n";
    else
    cout<<"NIE\n";
    return 0;
}
