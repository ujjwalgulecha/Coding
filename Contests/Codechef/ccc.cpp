<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define MAX 201
using namespace std;
void floyd(int);
int w[MAX][MAX], d[MAX][MAX][MAX];
int main()
{
char str[201];
int i,t,n,j,q,k,a,b,x,v;
cin>>t;
while(t--)
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        x=0;
        scanf("%s",&str);
        for(j=1;j<=n;j++)
        {
            if(str[x]=='Y')
            w[i][j]=1;
            else w[i][j]=99999;
            x++;
        }
    }
    floyd(n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
                cout<<w[i][j]<<" ";
        }
        cout<<endl;
    }
    cin>>q;
    while(q--)
    {
        cin>>a>>b;
        cout<<w[a+1][b+1]<<endl;
    }
}
 return 0;
 }//end of main

 void floyd(int v)
 {
 int k, i,j;

k=0;
for(i=1;i<=v;i++)
{
 for(j=1;j<=v;j++)
  d[k][i][j]=w[i][j];
 }

      for(k=1;k<=v;k++)
      {
       for(i=1;i<=v;i++)
    {
      for(j=1;j<=v;j++)
       d[k][i][j]=min(d[k-1][i][j], d[k-1][i][k]+ d[k-1][k][j]);
      }
    }
}
=======
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define MAX 201
using namespace std;
void floyd(int);
int w[MAX][MAX], d[MAX][MAX][MAX];
int main()
{
char str[201];
int i,t,n,j,q,k,a,b,x,v;
cin>>t;
while(t--)
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        x=0;
        scanf("%s",&str);
        for(j=1;j<=n;j++)
        {
            if(str[x]=='Y')
            w[i][j]=1;
            else w[i][j]=99999;
            x++;
        }
    }
    floyd(n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
                cout<<w[i][j]<<" ";
        }
        cout<<endl;
    }
    cin>>q;
    while(q--)
    {
        cin>>a>>b;
        cout<<w[a+1][b+1]<<endl;
    }
}
 return 0;
 }//end of main

 void floyd(int v)
 {
 int k, i,j;

k=0;
for(i=1;i<=v;i++)
{
 for(j=1;j<=v;j++)
  d[k][i][j]=w[i][j];
 }

      for(k=1;k<=v;k++)
      {
       for(i=1;i<=v;i++)
    {
      for(j=1;j<=v;j++)
       d[k][i][j]=min(d[k-1][i][j], d[k-1][i][k]+ d[k-1][k][j]);
      }
    }
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
