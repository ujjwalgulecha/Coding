<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int n,sum,a,s;
    while(t--)
    {
        sum=0;
        cin>>n;
        s=n;
        while(n--)
        {
            cin>>a;
            sum=(sum+a)%s;
        }
        //cout<<sum<<endl;
        if(sum%s==0)cout<<"YES\n";
        else cout<<"NO\n";

    }
        return 0;
}
=======
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int n,sum,a,s;
    while(t--)
    {
        sum=0;
        cin>>n;
        s=n;
        while(n--)
        {
            cin>>a;
            sum=(sum+a)%s;
        }
        //cout<<sum<<endl;
        if(sum%s==0)cout<<"YES\n";
        else cout<<"NO\n";

    }
        return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
