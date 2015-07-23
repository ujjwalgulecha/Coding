<<<<<<< HEAD
#include<iostream>
#include<math.h>
#include<fstream>
#include<string.h>
using namespace std;
int digit[10]={1,1,0,0,1,0,0,0,0,1};
int main()
{
    long long int a,b,ct,sq[5000];
    long long int t,j,i,x,flag;
    sq[0]=0;
    sq[1]=1;
    sq[2]=4;
    sq[3]=9;
    int k=4;
    for(i=5;i<=100000;i++)
    {
        flag=0;
        x=i*i;
        while(x)
        {
          if(!digit[x%10]){flag=1;break;}
          x/=10;
        }
    if(flag == 0) sq[k++]=i*i;
		}
    for(int i=0;i<k;++i) cout<<sq[i]<<"LL, ";
}
=======
#include<iostream>
#include<math.h>
#include<fstream>
#include<string.h>
using namespace std;
int digit[10]={1,1,0,0,1,0,0,0,0,1};
int main()
{
    long long int a,b,ct,sq[5000];
    long long int t,j,i,x,flag;
    sq[0]=0;
    sq[1]=1;
    sq[2]=4;
    sq[3]=9;
    int k=4;
    for(i=5;i<=100000;i++)
    {
        flag=0;
        x=i*i;
        while(x)
        {
          if(!digit[x%10]){flag=1;break;}
          x/=10;
        }
    if(flag == 0) sq[k++]=i*i;
		}
    for(int i=0;i<k;++i) cout<<sq[i]<<"LL, ";
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
