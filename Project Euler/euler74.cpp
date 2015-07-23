<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int count,a[60],count2=0;
int fact[] = {1,1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
#define NUM 60
void clear();
int chain(int i);
int main()
{
    int i;
    for(i=69;i<1000000;i++)
    {
        clear();
        chain(i);
    }
    cout<<count2;
    return 0;
}
void clear()
{
    for(int i=0;i<60;i++)
        a[i]=0;
        count=1;
}
int chain(int i)
{
    int sum=0,b=i,c,flag=1,s=0,k[60];
    while(flag)
    {
        sum=0;
        while(b!=0)
        {
            c=b%10;
            b/=10;
            sum+=fact[c];
        }
        for(int j=0;j<60;j++)
        {
            if(sum==a[j])
            {
                flag=0;
                break;
            }
        }
            if (flag)
            {
                count++;
                k[s]=sum;
                a[s]=sum;
                s++;
            }

        b=sum;
    }
  //  cout<<count<<endl;
if(count==NUM)count2++;
}

=======
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int count,a[60],count2=0;
int fact[] = {1,1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
#define NUM 60
void clear();
int chain(int i);
int main()
{
    int i;
    for(i=69;i<1000000;i++)
    {
        clear();
        chain(i);
    }
    cout<<count2;
    return 0;
}
void clear()
{
    for(int i=0;i<60;i++)
        a[i]=0;
        count=1;
}
int chain(int i)
{
    int sum=0,b=i,c,flag=1,s=0,k[60];
    while(flag)
    {
        sum=0;
        while(b!=0)
        {
            c=b%10;
            b/=10;
            sum+=fact[c];
        }
        for(int j=0;j<60;j++)
        {
            if(sum==a[j])
            {
                flag=0;
                break;
            }
        }
            if (flag)
            {
                count++;
                k[s]=sum;
                a[s]=sum;
                s++;
            }

        b=sum;
    }
  //  cout<<count<<endl;
if(count==NUM)count2++;
}

>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
