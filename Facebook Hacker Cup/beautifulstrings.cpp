<<<<<<< HEAD
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    char arr[501];
   int count[26];
    int t,sum,i,j;
    cin>>t;
    int z=t;
    getchar();
    while(t--)
    {
        gets(arr);
        for(i=0;i<26;i++)count[i]=0;
        j=strlen(arr);
       // cout<<j<<endl;
        for(i=0;i<j;i++)
        {
            if(((int)(arr[i])>=97)&&((int)(arr[i])<=122)||((int)(arr[i])>=65)&&((int)(arr[i])<=90))
            {
                arr[i]=tolower(arr[i]);
                //cout<<(int)arr[i]<<endl;
                count[(int)arr[i]-97]++;
            }
        }
        sort(count,count+26);
        sum=0;
        for(i=25;i>=0;i--)
        {
            //cout<<count[i]<<endl;
            sum+=(count[i]*(i+1));
        }
        cout<<"Case #"<<z-t<<": "<<sum<<endl;
    }
    return 0;
}
=======
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    char arr[501];
   int count[26];
    int t,sum,i,j;
    cin>>t;
    int z=t;
    getchar();
    while(t--)
    {
        gets(arr);
        for(i=0;i<26;i++)count[i]=0;
        j=strlen(arr);
       // cout<<j<<endl;
        for(i=0;i<j;i++)
        {
            if(((int)(arr[i])>=97)&&((int)(arr[i])<=122)||((int)(arr[i])>=65)&&((int)(arr[i])<=90))
            {
                arr[i]=tolower(arr[i]);
                //cout<<(int)arr[i]<<endl;
                count[(int)arr[i]-97]++;
            }
        }
        sort(count,count+26);
        sum=0;
        for(i=25;i>=0;i--)
        {
            //cout<<count[i]<<endl;
            sum+=(count[i]*(i+1));
        }
        cout<<"Case #"<<z-t<<": "<<sum<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
