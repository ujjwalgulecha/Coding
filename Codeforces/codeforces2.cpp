<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n,money,sum,ret,flag=1;
    cin>>n;
    sum=0;
    while(n--)
    {
        cin>>money;
        if(money==25)
        sum+=money;
        else
        {
            ret=money-25;
            if(ret>sum)
                flag=0;
            else
            {
                sum-=ret;
            }
        }
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int n,money,sum,ret,flag=1;
    cin>>n;
    sum=0;
    while(n--)
    {
        cin>>money;
        if(money==25)
        sum+=money;
        else
        {
            ret=money-25;
            if(ret>sum)
                flag=0;
            else
            {
                sum-=ret;
            }
        }
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
