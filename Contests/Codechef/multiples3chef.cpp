<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,q,x,y,i,z,count;
    cin>>n>>q;
    int a[100001]={0},flag[100001]={0};
    while(q--)
    {
        count=0;
      scanf("%d %d %d",&x,&y,&z);
        if(x==1)
        {

            for(i=y;i<=z;i++)
               // cout<<flag[i]<<endl;
            {if(!flag[i]){count++;}}
            cout<<count<<endl;
        }
        else
        {
            for(i=y;i<=z;i++)
            {
                if((++a[i])%3==0)flag[i]=0;
                else flag[i]=1;
            }



        }
    }
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,q,x,y,i,z,count;
    cin>>n>>q;
    int a[100001]={0},flag[100001]={0};
    while(q--)
    {
        count=0;
      scanf("%d %d %d",&x,&y,&z);
        if(x==1)
        {

            for(i=y;i<=z;i++)
               // cout<<flag[i]<<endl;
            {if(!flag[i]){count++;}}
            cout<<count<<endl;
        }
        else
        {
            for(i=y;i<=z;i++)
            {
                if((++a[i])%3==0)flag[i]=0;
                else flag[i]=1;
            }



        }
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
