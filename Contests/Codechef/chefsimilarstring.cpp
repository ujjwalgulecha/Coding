<<<<<<< HEAD
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,a[101],s[101],n,k,ct,i,flag,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
            k=0;
            ct=0;
        for(i=0;i<n;i++)
        {
            flag=0;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j]){flag=1;break;}
            }
            if(flag==0)
            {
                ct++;
                s[k]=a[i];
                k++;
            }
        }
        for(i=0;i<ct;i++)
            cout<<s[i]<<endl;
        cout<<endl;
    }
    return 0;
}
=======
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,a[101],s[101],n,k,ct,i,flag,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
            k=0;
            ct=0;
        for(i=0;i<n;i++)
        {
            flag=0;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j]){flag=1;break;}
            }
            if(flag==0)
            {
                ct++;
                s[k]=a[i];
                k++;
            }
        }
        for(i=0;i<ct;i++)
            cout<<s[i]<<endl;
        cout<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
