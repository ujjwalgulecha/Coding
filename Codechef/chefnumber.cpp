<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int a[10000];
    int count1=0,i,count2=0,diff,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            count1++;
        else
            count2++;
    }
    if(count1>count2)
        diff=count1-count2;
    else
        diff=count2-count1;
    cout<<diff<<endl;
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int a[10000];
    int count1=0,i,count2=0,diff,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            count1++;
        else
            count2++;
    }
    if(count1>count2)
        diff=count1-count2;
    else
        diff=count2-count1;
    cout<<diff<<endl;
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
