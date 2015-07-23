#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int reverse(int number, int reverseNumber){
if(number==0)
return reverseNumber;
return reverse(number/2, reverseNumber*2+number%2);
}
int main()
{
    int i,n;
    for(i=0;i<100;i++)
    {
            if(i==reverse(i,0))cout<<n<<endl;
    }
    return 0;
}
