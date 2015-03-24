<<<<<<< HEAD
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    char str[4];
    long long int k,j,i,andans,xorans,orans,ans,a[1001];
    while(t--)
    {

        cin>>n>>k>>ans;
        orans=andans=xorans=ans;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>str;
        for(i=0;i<n;i++)
        {
            orans|=a[i];
            xorans^=a[i];
            andans&=a[i];
        }
       if (str[0]=='A')
        cout<<andans<<endl;
       else if(str[0]=='O')
        cout<<orans<<endl;
       else
       {
           if(k%2==0)
            cout<<ans<<endl;
           else
            cout<<xorans<<endl;


       }
    }
}
=======
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    char str[4];
    long long int k,j,i,andans,xorans,orans,ans,a[1001];
    while(t--)
    {

        cin>>n>>k>>ans;
        orans=andans=xorans=ans;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>str;
        for(i=0;i<n;i++)
        {
            orans|=a[i];
            xorans^=a[i];
            andans&=a[i];
        }
       if (str[0]=='A')
        cout<<andans<<endl;
       else if(str[0]=='O')
        cout<<orans<<endl;
       else
       {
           if(k%2==0)
            cout<<ans<<endl;
           else
            cout<<xorans<<endl;


       }
    }
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
