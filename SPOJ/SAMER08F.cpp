<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int i;
    long long int a[101];
    for(i=1;i<=100;i++)
        a[i]=i*i;
    long long int n,sum;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}
=======
#include<iostream>
using namespace std;
int main()
{
    int i;
    long long int a[101];
    for(i=1;i<=100;i++)
        a[i]=i*i;
    long long int n,sum;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
