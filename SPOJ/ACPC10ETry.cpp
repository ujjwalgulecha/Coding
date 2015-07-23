#include<stdio.h>
#include<iostream>
using namespace std;

unsigned long long POW(unsigned long long num)
{
 unsigned long long n=1;
 while(n<num)
  n=n<<1;
 return n-num;
}
int main()
{
 while(1)
 {
  unsigned long long G ,T ,A ,D,MATCH,KNOCKOUT,E;
  scanf("%llu%llu%llu%llu",&G,&T,&A,&D);
  if(G==-1&&T==-1&&A==-1&&D==-1)
   break;
  MATCH=T*(T-1)/2;
  MATCH*=G;
  KNOCKOUT=G*A;
  E=POW(KNOCKOUT+D);
  cout<<E<<endl;
  MATCH=KNOCKOUT+D+MATCH-1+E;
  printf("%llu*%llu/%llu+%llu=%llu+%llu\n",G,A,T,D,MATCH,E);
 }
 return 0;
}
