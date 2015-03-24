<<<<<<< HEAD
#include<iostream>
using namespace std;
struct abc
{
    char x[100];
}a[50];
int main()
{
    int b[26]={1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0};
    int n,s,sum,j,c,i=0;
    cin>>n;
    s=n;
    while(n--)
    {
        cin>>a[i].x;
        i++;
    }
    for(i=0;i<s;i++)
    {
        sum=0;
        for(j=0;a[i].x[j]!='\0';j++)
        {
            c=((int)a[i].x[j])-65;
            sum+=b[c];
        }
        cout<<sum<<endl;
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
struct abc
{
    char x[100];
}a[50];
int main()
{
    int b[26]={1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0};
    int n,s,sum,j,c,i=0;
    cin>>n;
    s=n;
    while(n--)
    {
        cin>>a[i].x;
        i++;
    }
    for(i=0;i<s;i++)
    {
        sum=0;
        for(j=0;a[i].x[j]!='\0';j++)
        {
            c=((int)a[i].x[j])-65;
            sum+=b[c];
        }
        cout<<sum<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
