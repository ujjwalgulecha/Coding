<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int t,ct;
    long long int n,temp;
    int g;
    cin>>t;
    while(t--)
    {
        cin>>n>>g;
        if(n==1)
        {
            if(g==1)cout<<"CORRECT"<<endl;
            else cout<<"INCORRECT"<<endl;
        }
        else
        {ct=0;

        temp=(n*(n-1))/2;

        while(temp>0)
        {
            if(temp%2!=0)
            {
                ct++;   // counting number of ones
            }
                temp/=2;
        }
        if (ct==g)cout<<"CORRECT"<<endl;
        else cout<<"INCORRECT"<<endl;
        }
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int t,ct;
    long long int n,temp;
    int g;
    cin>>t;
    while(t--)
    {
        cin>>n>>g;
        if(n==1)
        {
            if(g==1)cout<<"CORRECT"<<endl;
            else cout<<"INCORRECT"<<endl;
        }
        else
        {ct=0;

        temp=(n*(n-1))/2;

        while(temp>0)
        {
            if(temp%2!=0)
            {
                ct++;   // counting number of ones
            }
                temp/=2;
        }
        if (ct==g)cout<<"CORRECT"<<endl;
        else cout<<"INCORRECT"<<endl;
        }
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
