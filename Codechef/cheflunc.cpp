<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n,a[100001],i,t,q,z,l,v,k,index;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>t;
    while(t--)
    {
        int b[100001]={0};
        q=0;
        z=1;
        cin>>l>>v>>k;
        for(;;)
        {
            index=(l+(v*q));
            if(index<1||index>n)break;
            q++;
            b[z]=a[index];
            z++;
        }
        if(k>q){cout<<"so sad\n";}
        else
        cout<<b[k]<<endl;
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int n,a[100001],i,t,q,z,l,v,k,index;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>t;
    while(t--)
    {
        int b[100001]={0};
        q=0;
        z=1;
        cin>>l>>v>>k;
        for(;;)
        {
            index=(l+(v*q));
            if(index<1||index>n)break;
            q++;
            b[z]=a[index];
            z++;
        }
        if(k>q){cout<<"so sad\n";}
        else
        cout<<b[k]<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
