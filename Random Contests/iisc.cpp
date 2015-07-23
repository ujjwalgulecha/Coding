<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n,x;
    cout<<"Enter n\n";
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
    for(i=1;i<=n;i++)
    {
        x=-1;
        if(i>a[i]){cout<<a[i]<<endl;continue;}
        while(a[i]>=0)
        {
            x++;
            a[i]-=i;
        }
        cout<<x<<endl;
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n,x;
    cout<<"Enter n\n";
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
    for(i=1;i<=n;i++)
    {
        x=-1;
        if(i>a[i]){cout<<a[i]<<endl;continue;}
        while(a[i]>=0)
        {
            x++;
            a[i]-=i;
        }
        cout<<x<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
