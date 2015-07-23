#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000007
int main()
{
    int t,i,len,l,num;
    cin>>t;
    char str[100005];
    while(t--)
    {
        l=1;
        cin>>str;
        len=strlen(str);
        if(str[0]=='l')num=2;
        else num=4;
        for(i=1;i<len;i++)
        {
            if((l%2)!=0&&str[i]=='l')num = (((((num%MAX)*(2%MAX))%MAX)-1)%MAX);
             else if((l%2)!=0&&str[i]=='r')num = (((((num%MAX)*(2%MAX))%MAX)+1)%MAX);
              if((l%2)==0&&str[i]=='l')num = ((((num%MAX)*(2%MAX))%MAX));
               if((l%2)==0&&str[i]=='r')num = (((((num%MAX)*(2%MAX))%MAX)+2)%MAX);
               l++;
        }
        cout<<num<<endl;
    }
    return 0;
}
