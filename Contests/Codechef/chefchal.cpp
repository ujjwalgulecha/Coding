<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int a[100001],i,j,n;
        cin>>n;int ct=0;
        int flag[100001]={0};
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<n;i++)
        {
            if(flag[i]==0&&((a[i+1]-a[i])!=(a[i]-a[i-1]))||flag[i-1]==-1)
            {
                ct++;
                flag[i]=1;
            }
            else flag[i]=-1;
        }
        cout<<ct<<endl;
        for(j=0;j<n;j++)
        {
            if(flag[i])cout<<a[i]<<" ";
        }
        cout<<endl;

        return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int a[100001],i,j,n;
        cin>>n;int ct=0;
        int flag[100001]={0};
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<n;i++)
        {
            if(flag[i]==0&&((a[i+1]-a[i])!=(a[i]-a[i-1]))||flag[i-1]==-1)
            {
                ct++;
                flag[i]=1;
            }
            else flag[i]=-1;
        }
        cout<<ct<<endl;
        for(j=0;j<n;j++)
        {
            if(flag[i])cout<<a[i]<<" ";
        }
        cout<<endl;

        return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
