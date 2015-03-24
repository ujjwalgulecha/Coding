<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
int a[101]={0};
int t=0,i=0,n;
int b[10001]={0};
int max=0,k;
a[0]=0;
cin>>t;
while(t--)
{
    max=0;
    k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
for(i=1;i<=n;i++)
{
    if(max<b[a[i]])
    {
        max=b[a[i]];
        k=a[i];
    }
    else if(max==b[a[i]] && a[i]<k)
    {
        k=a[i];
    }
}
cout<<k<<" "<<b[k]<<endl;
for(i=1;i<=n;i++)
b[a[i]]=0;
}
return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
int a[101]={0};
int t=0,i=0,n;
int b[10001]={0};
int max=0,k;
a[0]=0;
cin>>t;
while(t--)
{
    max=0;
    k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
for(i=1;i<=n;i++)
{
    if(max<b[a[i]])
    {
        max=b[a[i]];
        k=a[i];
    }
    else if(max==b[a[i]] && a[i]<k)
    {
        k=a[i];
    }
}
cout<<k<<" "<<b[k]<<endl;
for(i=1;i<=n;i++)
b[a[i]]=0;
}
return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
