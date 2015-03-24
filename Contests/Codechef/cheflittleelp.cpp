<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct random
{
    int str[10001];
    int ct[10001];
}q[100];
int main()
{
    int t,n,m,i,j,k,in,great,index[10001],num[100001],flag,sum,room;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>m;
        for(i=0;i<m;i++)
            cin>>index[i];
        for(i=0;i<n;i++)
        {
              cin>>num[i];
              for(j=0;j<num[i];j++)
              {
                  cin>>q[i].str[j];
                  q[i].ct[j]=0;
              }
        }
        for(i=0;i<m;i++)
        {
            flag=0;
            room=index[i];
            great=-1;
            for(k=0;k<num[room];k++)
            {
                if(q[room].ct[k]==0)
                {
                    if(q[room].str[k]>great){flag=1;great=q[room].str[k];in=k;}
                }
            }
            if(flag)
           {
               sum+=great;q[room].ct[in]=1;
           }
        }
        cout<<sum<<endl;
    }
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct random
{
    int str[10001];
    int ct[10001];
}q[100];
int main()
{
    int t,n,m,i,j,k,in,great,index[10001],num[100001],flag,sum,room;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>m;
        for(i=0;i<m;i++)
            cin>>index[i];
        for(i=0;i<n;i++)
        {
              cin>>num[i];
              for(j=0;j<num[i];j++)
              {
                  cin>>q[i].str[j];
                  q[i].ct[j]=0;
              }
        }
        for(i=0;i<m;i++)
        {
            flag=0;
            room=index[i];
            great=-1;
            for(k=0;k<num[room];k++)
            {
                if(q[room].ct[k]==0)
                {
                    if(q[room].str[k]>great){flag=1;great=q[room].str[k];in=k;}
                }
            }
            if(flag)
           {
               sum+=great;q[room].ct[in]=1;
           }
        }
        cout<<sum<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
