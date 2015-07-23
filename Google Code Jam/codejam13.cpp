<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
bool palin(int x);
int find(int l,int u);
int main()
{
    int t,l,u,k;
    cin>>t;
    k=t;
    while(t--)
    {
        cin>>l>>u;
        cout<<"Case #"<<k-t<<": "<<find(l,u)<<endl;
    }
    return 0;
}
int find(int l,int u)
{
    int i,j,sum=0;
    float p;
    for(i=u;i>=l;i--)
    {
        if(palin(i))
        {
            p=sqrt(i);
            if(p==(int)p)
            {
                if(palin(p))sum++;
            }
        }
    }
    return sum;
}
bool palin(int x)
{
    int digit,rev=0,num;
    num=x;
    do
     {
         digit=num%10;
         rev=(rev*10)+digit;
         num/=10;
     }while (num!=0);
     if (x==rev)
       return 1;
       else return 0;
}
=======
#include<iostream>
#include<math.h>
using namespace std;
bool palin(int x);
int find(int l,int u);
int main()
{
    int t,l,u,k;
    cin>>t;
    k=t;
    while(t--)
    {
        cin>>l>>u;
        cout<<"Case #"<<k-t<<": "<<find(l,u)<<endl;
    }
    return 0;
}
int find(int l,int u)
{
    int i,j,sum=0;
    float p;
    for(i=u;i>=l;i--)
    {
        if(palin(i))
        {
            p=sqrt(i);
            if(p==(int)p)
            {
                if(palin(p))sum++;
            }
        }
    }
    return sum;
}
bool palin(int x)
{
    int digit,rev=0,num;
    num=x;
    do
     {
         digit=num%10;
         rev=(rev*10)+digit;
         num/=10;
     }while (num!=0);
     if (x==rev)
       return 1;
       else return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
