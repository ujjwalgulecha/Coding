<<<<<<< HEAD
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,len,flag,temp,sum;
    cin>>t;
    char str[1000];
    while(t--)
    {
        flag=0;
        cin>>str;
        len=strlen(str);
        sum=0;
        for(i=0;i<len;i++)
        {
            if(flag==1)break;
            switch(str[i])
            {
                case '-' :

                case '*' :

                case '/' :

                case '+' : a= sum; f=1; sum=0; break;

                case ' ' :

                case '=' : flag=1;break;
                default :
                    temp=str[i]-48;
                    sum*=10+temp;
            }






        }









    }








}
=======
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,len,flag,temp,sum;
    cin>>t;
    char str[1000];
    while(t--)
    {
        flag=0;
        cin>>str;
        len=strlen(str);
        sum=0;
        for(i=0;i<len;i++)
        {
            if(flag==1)break;
            switch(str[i])
            {
                case '-' :

                case '*' :

                case '/' :

                case '+' : a= sum; f=1; sum=0; break;

                case ' ' :

                case '=' : flag=1;break;
                default :
                    temp=str[i]-48;
                    sum*=10+temp;
            }






        }









    }








}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
