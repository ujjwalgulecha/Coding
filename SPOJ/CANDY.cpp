<<<<<<< HEAD
#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int a;
    int arr[10005];
    while(1)
    {
        cin>>a;
        if(a==-1)break;
        int k,temp=0,temp1=0,i;
        for(i=0;i<a;i++)
        {
            cin>>arr[i];
            temp+=arr[i];
        }
        sort(arr,arr+a);
        k=temp/a;
        if(temp%a!=0){
            cout<<"-1\n";
        }
        else
        {
            for(i=0;i<a;i++)
            {
                while(arr[i]>k)
                {
                    arr[i]--;
                    temp1++;
                }
            }
            cout<<temp1<<endl;
        }
    }
    return 0;
}
=======
#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int a;
    int arr[10005];
    while(1)
    {
        cin>>a;
        if(a==-1)break;
        int k,temp=0,temp1=0,i;
        for(i=0;i<a;i++)
        {
            cin>>arr[i];
            temp+=arr[i];
        }
        sort(arr,arr+a);
        k=temp/a;
        if(temp%a!=0){
            cout<<"-1\n";
        }
        else
        {
            for(i=0;i<a;i++)
            {
                while(arr[i]>k)
                {
                    arr[i]--;
                    temp1++;
                }
            }
            cout<<temp1<<endl;
        }
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
