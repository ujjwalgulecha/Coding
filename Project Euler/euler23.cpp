<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
#define NUM 28123
int main()
{
    long long int arr[NUM+1]={0};
    long long int a[NUM];
    long long int k=0,sum,i,j;
    for(i=1;i<=NUM;i++)
   {
        sum=0;
        for(j=1;j<=sqrt(i);j++)
        {
            if(i%j==0)sum+=j;
            if((i%(i/j))==0&&(i/j)!=j&&(i/j)!=i)sum+=(i/j);
        }

        if(sum>i){a[k++]=i;}
   }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]+a[j]<=NUM)
                {
                    arr[a[i]+a[j]]=1;
                    arr[a[i]+a[i]]=1;
                }
        }
    }
    sum=0;
    for(i=1;i<=NUM;i++)
    {
        if(arr[i]==0)sum+=i;
    }
cout<<sum<<endl;

    return 0;
}
=======
#include<iostream>
#include<math.h>
using namespace std;
#define NUM 28123
int main()
{
    long long int arr[NUM+1]={0};
    long long int a[NUM];
    long long int k=0,sum,i,j;
    for(i=1;i<=NUM;i++)
   {
        sum=0;
        for(j=1;j<=sqrt(i);j++)
        {
            if(i%j==0)sum+=j;
            if((i%(i/j))==0&&(i/j)!=j&&(i/j)!=i)sum+=(i/j);
        }

        if(sum>i){a[k++]=i;}
   }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]+a[j]<=NUM)
                {
                    arr[a[i]+a[j]]=1;
                    arr[a[i]+a[i]]=1;
                }
        }
    }
    sum=0;
    for(i=1;i<=NUM;i++)
    {
        if(arr[i]==0)sum+=i;
    }
cout<<sum<<endl;

    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
