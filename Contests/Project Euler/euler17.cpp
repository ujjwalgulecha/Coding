<<<<<<< HEAD
#include<iostream>
#include<string.h>
using namespace std;
void pw(long n,int x);
int one[]={0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
int ten[]={0,0,6,6,5,5,5,7,6,6};
int sum=0;
int main()
{
    int i;
    for(i=1;i<=1000;i++)
       {
            pw(((i/1000)%100),8);
            pw(((i/100)%10),7);
            pw((i%100),0);
        }

    cout<<sum+2673<<endl;// adding 2673 for taking into account "and" which appear 99*9 times , so total length wud be 99*9*3
    return 0;
}

void pw(long n,int x)
{
if(n>19){sum+=ten[n/10]+one[n%10];}
else
{
    sum+=one[n];
}
if(n)sum+=x;
}






=======
#include<iostream>
#include<string.h>
using namespace std;
void pw(long n,int x);
int one[]={0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
int ten[]={0,0,6,6,5,5,5,7,6,6};
int sum=0;
int main()
{
    int i;
    for(i=1;i<=1000;i++)
       {
            pw(((i/1000)%100),8);
            pw(((i/100)%10),7);
            pw((i%100),0);
        }

    cout<<sum+2673<<endl;// adding 2673 for taking into account "and" which appear 99*9 times , so total length wud be 99*9*3
    return 0;
}

void pw(long n,int x)
{
if(n>19){sum+=ten[n/10]+one[n%10];}
else
{
    sum+=one[n];
}
if(n)sum+=x;
}






>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
