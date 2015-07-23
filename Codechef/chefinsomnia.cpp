<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,m,temp,temp2,i,j,k,count,crap,shit;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n>>m;
        int a[100001]={0};
        while(m--)
        {
            cin>>temp>>temp2;
            a[temp]=temp2;
        }
        for(i=1;i<100001;i++)
        {
            j=0;
            int b[100001]={0};
            if(a[i]==0)continue;
            else
            {
                crap=i;
                b[j]=i;
                for(;;)
                {
                    count++;
                    if (a[crap]==0)
                    break;
                    else
                    {
                        shit=a[crap];
                        crap=shit;
                        b[++j]=shit;
                    }
                }
            }
            for(k=0;k<=j;k++)
                a[b[j]]=0;
        }

        if(count<n)count++;

        cout<<count<<endl;

    }
}
=======
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,m,temp,temp2,i,j,k,count,crap,shit;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n>>m;
        int a[100001]={0};
        while(m--)
        {
            cin>>temp>>temp2;
            a[temp]=temp2;
        }
        for(i=1;i<100001;i++)
        {
            j=0;
            int b[100001]={0};
            if(a[i]==0)continue;
            else
            {
                crap=i;
                b[j]=i;
                for(;;)
                {
                    count++;
                    if (a[crap]==0)
                    break;
                    else
                    {
                        shit=a[crap];
                        crap=shit;
                        b[++j]=shit;
                    }
                }
            }
            for(k=0;k<=j;k++)
                a[b[j]]=0;
        }

        if(count<n)count++;

        cout<<count<<endl;

    }
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
