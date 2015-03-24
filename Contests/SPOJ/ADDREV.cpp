<<<<<<< HEAD
#include<iostream>
using namespace std;
long long int rev(long long int x);
int main()
{
    int t;
    long long int a,b,sum;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;
        a=rev(a);
        b=rev(b);
        sum=rev(a+b);
        cout<<sum<<endl;
    }
    return 0;
}
long long int rev(long long int x)
{
    long long int temp=x;
    long long int sum=0,a;
    while(x)
    {
        a=x%10;
        sum=(sum*10)+a;
        x/=10;
    }
    return sum;
}
=======
#include<iostream>
using namespace std;
long long int rev(long long int x);
int main()
{
    int t;
    long long int a,b,sum;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;
        a=rev(a);
        b=rev(b);
        sum=rev(a+b);
        cout<<sum<<endl;
    }
    return 0;
}
long long int rev(long long int x)
{
    long long int temp=x;
    long long int sum=0,a;
    while(x)
    {
        a=x%10;
        sum=(sum*10)+a;
        x/=10;
    }
    return sum;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
