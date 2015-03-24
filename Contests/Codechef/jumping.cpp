<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    long long int t,temp,n,i,b;
    cin>>t;
    while(t--)
{
    cin>>n>>b;
    temp=(n*(n+1))/2;
    for(i=1;i<=n;i++)
    {
        if(((i*(i+1))/2)==b)
        {
            temp--;
            break;
        }
    }
    cout<<temp<<endl;
}
return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    long long int t,temp,n,i,b;
    cin>>t;
    while(t--)
{
    cin>>n>>b;
    temp=(n*(n+1))/2;
    for(i=1;i<=n;i++)
    {
        if(((i*(i+1))/2)==b)
        {
            temp--;
            break;
        }
    }
    cout<<temp<<endl;
}
return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
