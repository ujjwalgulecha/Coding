<<<<<<< HEAD
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[201];
    int a[26],A[26];
    int c;
    int n;
    cin>>n;
    int sum,i;
    while(n--)
    {
        memset(a,0,sizeof(int)*26);
        memset(A,0,sizeof(int)*26);
        cin>>s;
        i=0;
        sum=0;
        while(s[i]!='\0')
        {
            c=(int)s[i];
            if(c>90)
                a[c-97]++;
            else
                A[c-65]++;
                i++;
        }
        for(i=0;i<26;i++)
        {
            if(a[i]%2==0)
                {sum+=(a[i]/2);}
            else
                {sum+=((a[i]+1)/2);}
        }
        for(i=0;i<26;i++)
        {
            if(A[i]%2==0)
                {sum+=(A[i]/2);}
            else
                {sum+=((A[i]+1)/2);}
        }
        cout<<sum<<endl;

    }
return 0;
    }
=======
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[201];
    int a[26],A[26];
    int c;
    int n;
    cin>>n;
    int sum,i;
    while(n--)
    {
        memset(a,0,sizeof(int)*26);
        memset(A,0,sizeof(int)*26);
        cin>>s;
        i=0;
        sum=0;
        while(s[i]!='\0')
        {
            c=(int)s[i];
            if(c>90)
                a[c-97]++;
            else
                A[c-65]++;
                i++;
        }
        for(i=0;i<26;i++)
        {
            if(a[i]%2==0)
                {sum+=(a[i]/2);}
            else
                {sum+=((a[i]+1)/2);}
        }
        for(i=0;i<26;i++)
        {
            if(A[i]%2==0)
                {sum+=(A[i]/2);}
            else
                {sum+=((A[i]+1)/2);}
        }
        cout<<sum<<endl;

    }
return 0;
    }
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
