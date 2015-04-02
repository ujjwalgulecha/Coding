#include<bits/stdc++.h>
using namespace std;
char Input[5001];
unsigned long long DP[5001];
int main()
{
    while (1)
    {
        cin>>Input;
        if(strcmp(Input,"0")==0)return 0;
        int Len = strlen (Input);
        int Index = 1;
        memset (DP, 0, sizeof DP);
        DP[0] = 1;
        while (Index < Len)
        {
           int temp = 0;
           temp = (Input[Index-1]-'0') * 10;
           temp += (Input[Index] -'0');
           if (Input[Index]-'0') DP[Index] = DP[Index-1];
           if (temp <= 26 && temp > 9) {if(Index-2<0)DP[Index] += DP[0];else DP[Index]+=DP[Index-2];
           }
           Index++;
        }
         cout<<DP[Len-1]<<endl;

     }
}
