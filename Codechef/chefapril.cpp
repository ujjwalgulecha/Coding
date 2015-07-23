<<<<<<< HEAD
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,x,n,sum1,sum2,sum3,sum4,i,diff,diff1,a[101];
    cin>>t;
    while(t--)
    {
        sum1=0,sum2=0,sum3=0,sum4=0;
        cin>>n;
        cin>>x;
        for(i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);
            for(i=0;i<x;i++)
                sum1+=a[i];
            for(i=x;i<n;i++)
                sum2+=a[i];
            for(i=0;i<n-x;i++)
                sum3+=a[i];
            for(i=n-x;i<n;i++)
                sum4+=a[i];
            diff=sum2-sum1;
            diff1=sum3-sum4;
            if(diff<0)diff=(-1*diff);
            if(diff1<0)diff1=(-1*diff1);
            if(diff>diff1)
            cout<<diff;
            else cout<<diff1;
            cout<<endl;
    }

}
=======
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,x,n,sum1,sum2,sum3,sum4,i,diff,diff1,a[101];
    cin>>t;
    while(t--)
    {
        sum1=0,sum2=0,sum3=0,sum4=0;
        cin>>n;
        cin>>x;
        for(i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);
            for(i=0;i<x;i++)
                sum1+=a[i];
            for(i=x;i<n;i++)
                sum2+=a[i];
            for(i=0;i<n-x;i++)
                sum3+=a[i];
            for(i=n-x;i<n;i++)
                sum4+=a[i];
            diff=sum2-sum1;
            diff1=sum3-sum4;
            if(diff<0)diff=(-1*diff);
            if(diff1<0)diff1=(-1*diff1);
            if(diff>diff1)
            cout<<diff;
            else cout<<diff1;
            cout<<endl;
    }

}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
