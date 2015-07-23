#include<bits/stdc++.h>
using namespace std;
unsigned long long power(unsigned long long num)
{
 unsigned long long n=1;
 while(n<num)
  n=n<<1;
 return n-num;
}
int main()
{
    long long int sum=0;
    long long int G,T,A,D;
    long long int temp,i;
    while(1)
    {
        sum=0;
        cin>>G>>T>>A>>D;
        if(G==-1&&T==-1&&A==-1&&D==-1)return 0;
        sum =T*(T-1)/2;
        sum = sum*G;
        temp = (G*A);
        temp += D;
        long long int teams;
        teams=power(temp);
        cout<<G<<"*"<<A<<"/"<<T<<"+"<<D<<"="<<sum+teams+temp-1<<"+"<<teams<<endl;
    }
}
