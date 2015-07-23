<<<<<<< HEAD
#include<iostream>
#include<stdlib.h>
using namespace std;
int check(int a[10][10],int n,int m);
int main()
{
    int n,m,a[10][10],b;
    cin>>n;cin>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    b=check(a,n,m);
        if(b)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        return 0;
}
int check(int a[10][10],int n,int m)
{
    int i,s,p,k,j=0;
    for(i=0;i<n-1;i++)
    {
        p=i+1;
        for(j=0;j<m;j++)
        {
            s=a[i][0];
            if(a[i][j]!=s||a[i][j]==a[p][j])
                return 0;
        }
    }
    return 1;
}
=======
#include<iostream>
#include<stdlib.h>
using namespace std;
int check(int a[10][10],int n,int m);
int main()
{
    int n,m,a[10][10],b;
    cin>>n;cin>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    b=check(a,n,m);
        if(b)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        return 0;
}
int check(int a[10][10],int n,int m)
{
    int i,s,p,k,j=0;
    for(i=0;i<n-1;i++)
    {
        p=i+1;
        for(j=0;j<m;j++)
        {
            s=a[i][0];
            if(a[i][j]!=s||a[i][j]==a[p][j])
                return 0;
        }
    }
    return 1;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
