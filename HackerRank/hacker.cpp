<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{ long long int n,k,a[100005],min=9999999999;
  cin>>n;
  cin>>k;
  int i,j;
  for(i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);
  if(n==1)cout<<a[0]<<endl;
  else{
  i=0; j=k-1;
    while(j<n)
    {
        if(a[j]-a[i]<=min){min=a[j]-a[i];}
        i++;
        j++;
    }
 cout<<min<<endl;
  }
  return 0;
}
=======
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{ long long int n,k,a[100005],min=9999999999;
  cin>>n;
  cin>>k;
  int i,j;
  for(i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);
  if(n==1)cout<<a[0]<<endl;
  else{
  i=0; j=k-1;
    while(j<n)
    {
        if(a[j]-a[i]<=min){min=a[j]-a[i];}
        i++;
        j++;
    }
 cout<<min<<endl;
  }
  return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
