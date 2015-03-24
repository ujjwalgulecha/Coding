<<<<<<< HEAD
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int t,i;
    long long int sum,a,list[20];
    for(i=0;i<20;i++)
        list[i]=pow(5,i+1);

         for(i=1;i<20;i++)
        cout<<list[i]<<endl;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a;
        for(i=1;i<20;i++)
        {
            sum+=(a/list[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
=======
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int t,i;
    long long int sum,a,list[20];
    for(i=0;i<20;i++)
        list[i]=pow(5,i+1);

         for(i=1;i<20;i++)
        cout<<list[i]<<endl;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a;
        for(i=1;i<20;i++)
        {
            sum+=(a/list[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
