<<<<<<< HEAD
/*The 38th
 Annual
ACM International Collegiate
Programming Contest
Asia Regional - Daejeon
Boxes Problem (A)
-Ujjwal Gulecha
*/
#include<iostream>
using namespace std;
int check(int j,int i);
int a[100][100];
int n,m;
int check(int j,int i)
{
    int ct=0,x,z,flag=0;
    if(j==n-1)return 0;
    for(x=j+1;x<n;x++)
    {
        flag=1;
        if(a[x][i]==0){z=x;ct++;}
    }
    if(!flag)
    {a[j][i]=0;
    a[z][i]=1;}
    return ct;
}
int main()
{
    int t,i,ct,j;
    cin>>t;
    while(t--)
    {
        ct=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                if(a[j][i]==1)
                    ct+=check(j,i);
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}
=======
/*The 38th
 Annual
ACM International Collegiate
Programming Contest
Asia Regional - Daejeon
Boxes Problem (A)
-Ujjwal Gulecha
*/
#include<iostream>
using namespace std;
int check(int j,int i);
int a[100][100];
int n,m;
int check(int j,int i)
{
    int ct=0,x,z,flag=0;
    if(j==n-1)return 0;
    for(x=j+1;x<n;x++)
    {
        flag=1;
        if(a[x][i]==0){z=x;ct++;}
    }
    if(!flag)
    {a[j][i]=0;
    a[z][i]=1;}
    return ct;
}
int main()
{
    int t,i,ct,j;
    cin>>t;
    while(t--)
    {
        ct=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                if(a[j][i]==1)
                    ct+=check(j,i);
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
