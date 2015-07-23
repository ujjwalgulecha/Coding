<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    long long int t,n,flag,h,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0){cout<<"1\n";continue;}
        flag=1;
        h=1;
        for(i=1;i<=n;i++)
        {
            if(flag==1){h*=2;flag=0;}
            else if(flag==0){h+=1;flag=1;}

        }
        cout<<h<<endl;

    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    long long int t,n,flag,h,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0){cout<<"1\n";continue;}
        flag=1;
        h=1;
        for(i=1;i<=n;i++)
        {
            if(flag==1){h*=2;flag=0;}
            else if(flag==0){h+=1;flag=1;}

        }
        cout<<h<<endl;

    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
