<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n,i,a,count=0;
    cin>>n;
    while(n!=0)
    {
        a=n%2;
        if(a==1)
            count++;
        n/=2;
    }
    cout<<count<<endl;
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int n,i,a,count=0;
    cin>>n;
    while(n!=0)
    {
        a=n%2;
        if(a==1)
            count++;
        n/=2;
    }
    cout<<count<<endl;
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
