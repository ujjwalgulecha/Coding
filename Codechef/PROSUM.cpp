<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    long long int ct1,ct2,ct3,t,n,i,a[100001],ans,zero,one,two,diff;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ct1=ct2=ct3=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)ct1++;
            if(a[i]==1)ct2++;
            if(a[i]==2)ct3++;
        }
        ans=((n*(n-1))/2);
        zero=(ans-((((n-ct1)*(n-ct1-1))/2)));
        if(zero<0)zero=0;
        one=(ans-((((n-ct2)*(n-ct2-1))/2)));
        if(one<0)one=0;
        if(ct1>0&&ct2>0)
        diff=(ct1*ct2);
        else diff=0;
        if(diff<0)diff=0;
        two=(ct3*(ct3-1))/2;
        if(two<0)two=0;
        if(ct1==0)zero=0;if(ct2==0)one=0;if(ct3==0)two=0;
        //cout<<zero<<" "<<one<<" "<<two<<" "<<diff<<endl;
        ans=ans-zero-one+diff-two;
        cout<<ans<<endl;
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    long long int ct1,ct2,ct3,t,n,i,a[100001],ans,zero,one,two,diff;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ct1=ct2=ct3=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)ct1++;
            if(a[i]==1)ct2++;
            if(a[i]==2)ct3++;
        }
        ans=((n*(n-1))/2);
        zero=(ans-((((n-ct1)*(n-ct1-1))/2)));
        if(zero<0)zero=0;
        one=(ans-((((n-ct2)*(n-ct2-1))/2)));
        if(one<0)one=0;
        if(ct1>0&&ct2>0)
        diff=(ct1*ct2);
        else diff=0;
        if(diff<0)diff=0;
        two=(ct3*(ct3-1))/2;
        if(two<0)two=0;
        if(ct1==0)zero=0;if(ct2==0)one=0;if(ct3==0)two=0;
        //cout<<zero<<" "<<one<<" "<<two<<" "<<diff<<endl;
        ans=ans-zero-one+diff-two;
        cout<<ans<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
