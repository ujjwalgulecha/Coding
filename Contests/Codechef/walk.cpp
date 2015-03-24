<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    long long int t,great,max,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        great=max=a[0];
        for(i=1;i<n;i++)
        {
            max--;
            if(max<a[i])
            {
                max=a[i];
                great=a[i]+i;
            }
        }
        cout<<great<<endl;
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    long long int t,great,max,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        great=max=a[0];
        for(i=1;i<n;i++)
        {
            max--;
            if(max<a[i])
            {
                max=a[i];
                great=a[i]+i;
            }
        }
        cout<<great<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
