<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
bool binsearch(int a[],int x,int low,int high);
using namespace std;
int main()
{
 int a[30],n,sum,i,x;
 cout<<"Enter number of numbers\n";
 cin>>n;
 cout<<"Enter the numbers\n";
 for(i=0;i<n;i++)
cin>>a[i];
 cout<<"Enter sum\n";
 cin>>sum;

 sort(a,a+n);
 for(i=0;i<(n/2);i++)
 {
     x=sum-a[i];
     if(x==0)
     {
            cout<<"Not Possible\n";break;
     }
     if(binsearch(a,x,0,n))
     {
         cout<<a[i]<<" and "<<x<<endl;
     }
}
return 0;
 }
 bool binsearch(int a[],int x,int low,int high)
 {
     int mid=(low+high)/2;
     if(x==a[mid])return 1;
     while(high>=low)
     {
         if(x>a[mid])
         {

             return(a,x,mid+1,high);

         }
         else
            return (a,x,low,mid-1);
     }
     return 0;
 }









=======
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
bool binsearch(int a[],int x,int low,int high);
using namespace std;
int main()
{
 int a[30],n,sum,i,x;
 cout<<"Enter number of numbers\n";
 cin>>n;
 cout<<"Enter the numbers\n";
 for(i=0;i<n;i++)
cin>>a[i];
 cout<<"Enter sum\n";
 cin>>sum;

 sort(a,a+n);
 for(i=0;i<(n/2);i++)
 {
     x=sum-a[i];
     if(x==0)
     {
            cout<<"Not Possible\n";break;
     }
     if(binsearch(a,x,0,n))
     {
         cout<<a[i]<<" and "<<x<<endl;
     }
}
return 0;
 }
 bool binsearch(int a[],int x,int low,int high)
 {
     int mid=(low+high)/2;
     if(x==a[mid])return 1;
     while(high>=low)
     {
         if(x>a[mid])
         {

             return(a,x,mid+1,high);

         }
         else
            return (a,x,low,mid-1);
     }
     return 0;
 }









>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
