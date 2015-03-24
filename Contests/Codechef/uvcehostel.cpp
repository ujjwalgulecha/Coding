<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n,y,x,c;
    cin>>t;
    while(t--)
    {

        cin>>n>>c;
        x=n-c;
        if(c>=n){cout<<"0\n";continue;}
        x=(x/c);
        y=(n-c)%c;
        if(y>0)x++;
        cout<<x<<endl;
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n,y,x,c;
    cin>>t;
    while(t--)
    {

        cin>>n>>c;
        x=n-c;
        if(c>=n){cout<<"0\n";continue;}
        x=(x/c);
        y=(n-c)%c;
        if(y>0)x++;
        cout<<x<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
