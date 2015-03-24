<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{

    long long int n,a[1000000],i,q,index,num;
    char c;
    cin>>n;
    cin>>q;
    cin>>a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i-1]+a[i];
    }
    for(i=0;i<q;i++)
    {
        cin>>c;
        cin>>index>>num;
        if(c=='G')
            a[i]+=num;
        if(c=='S')
            a[i]-=num;




    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{

    long long int n,a[1000000],i,q,index,num;
    char c;
    cin>>n;
    cin>>q;
    cin>>a[0];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i-1]+a[i];
    }
    for(i=0;i<q;i++)
    {
        cin>>c;
        cin>>index>>num;
        if(c=='G')
            a[i]+=num;
        if(c=='S')
            a[i]-=num;




    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
