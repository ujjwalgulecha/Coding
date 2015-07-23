<<<<<<< HEAD
#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t,sum,sum2,i,j,len;
    cin>>t;
    char str[10001];
    while(t--)
    {
        sum=sum2=0;
        scanf("%s",str);
        len=strlen(str);
        if((len%2)==0)
        {
            for(i=0;i<(len/2);i++)
            sum+=str[i];
        for(j=(len/2);j<len;j++)
        sum2+=str[j];
        if(sum!=sum2)
           {cout<<"NO\n";}
        else {cout<<"YES\n";}
        }
        else if((len%2)!=0)
        {
            for(i=0;i<len/2;i++)
            sum+=str[i];
        for(j=(len/2)+1;j<len;j++)
        sum2+=str[j];
        if(sum!=sum2)
            {cout<<"NO\n";}
        else {cout<<"YES\n";}
        }
    }
    return 0;
}
=======
#include<iostream>
#include<algorithm>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t,sum,sum2,i,j,len;
    cin>>t;
    char str[10001];
    while(t--)
    {
        sum=sum2=0;
        scanf("%s",str);
        len=strlen(str);
        if((len%2)==0)
        {
            for(i=0;i<(len/2);i++)
            sum+=str[i];
        for(j=(len/2);j<len;j++)
        sum2+=str[j];
        if(sum!=sum2)
           {cout<<"NO\n";}
        else {cout<<"YES\n";}
        }
        else if((len%2)!=0)
        {
            for(i=0;i<len/2;i++)
            sum+=str[i];
        for(j=(len/2)+1;j<len;j++)
        sum2+=str[j];
        if(sum!=sum2)
            {cout<<"NO\n";}
        else {cout<<"YES\n";}
        }
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
