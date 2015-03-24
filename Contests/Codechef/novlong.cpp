<<<<<<< HEAD
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,pos,store,a[104];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>pos;
        store=a[pos-1];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(store==a[i])break;
        }
        cout<<i+1<<endl;
    }
    return 0;

}
=======
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,pos,store,a[104];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>pos;
        store=a[pos-1];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(store==a[i])break;
        }
        cout<<i+1<<endl;
    }
    return 0;

}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
