<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b>a||(b%2==0&&(a%2)!=0))
        {
            cout<<"No Number\n";
            continue;
        }
        else
        {
            if(a%2==0)
            {
                cout<<a+b<<endl;
            }
            else
            {
                cout<<a+b-1<<endl;
            }
        }
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b>a||(b%2==0&&(a%2)!=0))
        {
            cout<<"No Number\n";
            continue;
        }
        else
        {
            if(a%2==0)
            {
                cout<<a+b<<endl;
            }
            else
            {
                cout<<a+b-1<<endl;
            }
        }
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
