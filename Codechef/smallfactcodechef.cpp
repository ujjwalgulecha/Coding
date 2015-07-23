<<<<<<< HEAD
#include<iostream>
#include<stdlib.h>
using namespace std;
int read(int b,int *x);
int step1(int *count,int z,int x[],int *step);
int step2(int x[],int *j,int *temp);
void display(int x[],int *j);
int main()
{
    int x[100],a[i],b,count,j,z,temp=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    count=read(b,x);
    j=step1(&count,z,x,&temp);
    while(temp!=0)
        {
            x[j]=(temp)%10;
            (temp)/=10;
            j++;
        }
        j--;
        for(int i=j;i>=0;i--)
       cout<<x[i];
    return 0;
}
int read(int b,int x[])
{
    int counter=0;
    int i=0;
     while(b!=0)
    {
        x[i]=b%10;
        b/=10;
        i++;
        counter++;
    }
    return counter;
}

int step1(int *count,int z,int x[],int *temp)
{
        int p,j=0;
        while((*count)!=0)
        {
            (*count)--;
            p=x[j]*z+(*temp);
            x[j]=p%10;
            (*temp)=p/10;
            j++;
        }
        return j;
}













=======
#include<iostream>
#include<stdlib.h>
using namespace std;
int read(int b,int *x);
int step1(int *count,int z,int x[],int *step);
int step2(int x[],int *j,int *temp);
void display(int x[],int *j);
int main()
{
    int x[100],a[i],b,count,j,z,temp=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    count=read(b,x);
    j=step1(&count,z,x,&temp);
    while(temp!=0)
        {
            x[j]=(temp)%10;
            (temp)/=10;
            j++;
        }
        j--;
        for(int i=j;i>=0;i--)
       cout<<x[i];
    return 0;
}
int read(int b,int x[])
{
    int counter=0;
    int i=0;
     while(b!=0)
    {
        x[i]=b%10;
        b/=10;
        i++;
        counter++;
    }
    return counter;
}

int step1(int *count,int z,int x[],int *temp)
{
        int p,j=0;
        while((*count)!=0)
        {
            (*count)--;
            p=x[j]*z+(*temp);
            x[j]=p%10;
            (*temp)=p/10;
            j++;
        }
        return j;
}













>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
