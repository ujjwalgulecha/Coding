<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int t,s,n,c;
    cin>>t;
    while(t--)
    {
        cin>>s>>n>>c;
        if(s-n>2*c){cout<<"NO\n";continue;}
        if(n>=s){cout<<"YES 0\n";continue;}
        else
        {
            s=s-n;
            if(s%2==0)
            {
                cout<<"YES "<<s/2;
            }
            else cout<<"YES "<<(s+1)/2;
            cout<<endl;
        }
    }
}
=======
#include<iostream>
using namespace std;
int main()
{
    int t,s,n,c;
    cin>>t;
    while(t--)
    {
        cin>>s>>n>>c;
        if(s-n>2*c){cout<<"NO\n";continue;}
        if(n>=s){cout<<"YES 0\n";continue;}
        else
        {
            s=s-n;
            if(s%2==0)
            {
                cout<<"YES "<<s/2;
            }
            else cout<<"YES "<<(s+1)/2;
            cout<<endl;
        }
    }
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
