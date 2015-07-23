<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    long long int n,i,ct,ct1,flag;
    long long int a[1000004],b[1000004];
        cin>>n;
        for(i=0;i<n;i++)
        {cin>>a[i];b[i]=a[i];}
        ct=0;
        ct1=0;
        flag=0;
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]<0)flag=1;
            else flag=0;
        }
        if(flag){cout<<n<<endl;}
        else
        {
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>0)continue;
            else if(a[i]-a[i-1]<=0){
                a[i]=a[i-1]+1;
                ct++;
            }
        }
         for(i=n-2;i>=0;i--)
        {
            if(b[i+1]-b[i]>0)continue;
            else if(b[i+1]-b[i]<=0){
                b[i]=b[i+1]-1;
                ct1++;
                if(b[i]<=0){ct1=n;break;}
            }
        }

        if(ct1<ct)cout<<ct1<<endl;
        else cout<<ct<<endl;

        }
        return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    long long int n,i,ct,ct1,flag;
    long long int a[1000004],b[1000004];
        cin>>n;
        for(i=0;i<n;i++)
        {cin>>a[i];b[i]=a[i];}
        ct=0;
        ct1=0;
        flag=0;
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]<0)flag=1;
            else flag=0;
        }
        if(flag){cout<<n<<endl;}
        else
        {
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>0)continue;
            else if(a[i]-a[i-1]<=0){
                a[i]=a[i-1]+1;
                ct++;
            }
        }
         for(i=n-2;i>=0;i--)
        {
            if(b[i+1]-b[i]>0)continue;
            else if(b[i+1]-b[i]<=0){
                b[i]=b[i+1]-1;
                ct1++;
                if(b[i]<=0){ct1=n;break;}
            }
        }

        if(ct1<ct)cout<<ct1<<endl;
        else cout<<ct<<endl;

        }
        return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
