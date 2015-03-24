<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,n,i;
    while(t--)
    {
        int flag=0;
        int a[2002]={0};
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x<0)
                a[1000+x]++;
            else
                a[x]++;
        }
        for(i=0;i<2001;i++)
        {
            if(a[i]>n/2){cout<<"YES "<<i<<"\n";flag=1;break;}
        }
        if(flag==0){cout<<"NO\n";}
    }
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,n,i;
    while(t--)
    {
        int flag=0;
        int a[2002]={0};
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x<0)
                a[1000+x]++;
            else
                a[x]++;
        }
        for(i=0;i<2001;i++)
        {
            if(a[i]>n/2){cout<<"YES "<<i<<"\n";flag=1;break;}
        }
        if(flag==0){cout<<"NO\n";}
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
