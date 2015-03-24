#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,f;
    cin>>t;
    string temp,str;
    while(t--)
    {
        f=0;
        cin>>str;
       temp=str;
        while(next_permutation(str.begin(), str.end()))
        {
            f=1;
            cout << str << '\n';
            break;
        }
        if(f==0)cout<<"no answer\n";
    }
    return 0;
}
