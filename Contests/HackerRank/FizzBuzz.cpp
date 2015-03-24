<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int i,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            if(i%3==0)cout<<"Fizz";
            if(i%5==0)cout<<"Buzz";
            if(i%5!=0&&i%3!=0)cout<<i;
            cout<<endl;
        }
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int i,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            if(i%3==0)cout<<"Fizz";
            if(i%5==0)cout<<"Buzz";
            if(i%5!=0&&i%3!=0)cout<<i;
            cout<<endl;
        }
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
