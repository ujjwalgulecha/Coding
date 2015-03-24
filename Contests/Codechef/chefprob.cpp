<<<<<<< HEAD
#include<iostream>
long long int reverse(long long int p);
using namespace std;
int main()
{
    long long int x,y,sum;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        x=reverse(x);
        y=reverse(y);
        sum=x+y;
        cout<<reverse(sum)<<endl;
    }
    return 0;
}
long long int reverse(long long int p)
{
    int x=p,y;
    long long int revnum = 0;
    while(x > 0)
    {
        revnum = revnum*10 + x%10;
        x/=10;
    }
    y=p+revnum;
    revnum=y-p;
    return revnum;
}

=======
#include<iostream>
long long int reverse(long long int p);
using namespace std;
int main()
{
    long long int x,y,sum;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        x=reverse(x);
        y=reverse(y);
        sum=x+y;
        cout<<reverse(sum)<<endl;
    }
    return 0;
}
long long int reverse(long long int p)
{
    int x=p,y;
    long long int revnum = 0;
    while(x > 0)
    {
        revnum = revnum*10 + x%10;
        x/=10;
    }
    y=p+revnum;
    revnum=y-p;
    return revnum;
}

>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
