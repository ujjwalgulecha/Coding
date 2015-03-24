<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int t,ans,n,c,x,z,m,left,flag;
    cin>>t;
    int i;
    while(t--)
    {
        flag=1;
        ans=0;
        cin>>n>>c>>m;
        ans+=(n/c);
        x=n/c;
        if(x<m)
        {
            cout<<ans<<endl;
            continue;
        }
        else
        {
            z=x;
            while(flag)
            {
                ans+=z/m;
                z=(z/m)+z%m;
                if(z>=m){flag=1;}
                else flag=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

=======
#include<iostream>
using namespace std;
int main()
{
    int t,ans,n,c,x,z,m,left,flag;
    cin>>t;
    int i;
    while(t--)
    {
        flag=1;
        ans=0;
        cin>>n>>c>>m;
        ans+=(n/c);
        x=n/c;
        if(x<m)
        {
            cout<<ans<<endl;
            continue;
        }
        else
        {
            z=x;
            while(flag)
            {
                ans+=z/m;
                z=(z/m)+z%m;
                if(z>=m){flag=1;}
                else flag=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
