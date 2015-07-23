<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int t,n,k,i,a;
    cin>>t;
    int f[20001]={1};
    while(t--)
    {
        k=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            k=i;
            a=(k+i)%(n+1);
            if(f[a]==0)continue;
            f[a]=0;
            cout<<a<<" ";
        }

    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int t,n,k,i,a;
    cin>>t;
    int f[20001]={1};
    while(t--)
    {
        k=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            k=i;
            a=(k+i)%(n+1);
            if(f[a]==0)continue;
            f[a]=0;
            cout<<a<<" ";
        }

    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
