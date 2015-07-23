<<<<<<< HEAD
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    char str[1000001];
    cin>>t;
    int i,ct,day,max;
    while(t--)
    {
        scanf("%s",str);
        max=1;
        day=0;
        ct=1;
        for(i=0;i<strlen(str);i++)
        {
            ct=1;
            if(str[i]=='#')continue;
            else while(str[i]=='.')
            {
                ct++;
                i++;
            }
            if(ct>max){max=ct;day++;}

        }
        cout<<day<<endl;
    }
    return 0;
}
=======
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    char str[1000001];
    cin>>t;
    int i,ct,day,max;
    while(t--)
    {
        scanf("%s",str);
        max=1;
        day=0;
        ct=1;
        for(i=0;i<strlen(str);i++)
        {
            ct=1;
            if(str[i]=='#')continue;
            else while(str[i]=='.')
            {
                ct++;
                i++;
            }
            if(ct>max){max=ct;day++;}

        }
        cout<<day<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
