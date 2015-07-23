<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
int t;
int ct,n,k,c[1000],j,i;
    cin>>t;
    while(t--)
    {
        ct=1;
        cin>>n;
        cin>>k;
        c[0]=2;
        j=1;
        if(k==1){cout<<"1\n";continue;}
        for(i=2;i<=777;i++)
        {
            c[j]=2*i;
             if(c[j]>n)break;
            j++;
            ct++;
        }
        if (ct<k)cout<<"-1\n";
        else {for(i=0;i<k;i++)cout<<c[i]<<" ";}
        cout<<endl;
    }
    return 0;
}


=======
#include<iostream>
using namespace std;
int main()
{
int t;
int ct,n,k,c[1000],j,i;
    cin>>t;
    while(t--)
    {
        ct=1;
        cin>>n;
        cin>>k;
        c[0]=2;
        j=1;
        if(k==1){cout<<"1\n";continue;}
        for(i=2;i<=777;i++)
        {
            c[j]=2*i;
             if(c[j]>n)break;
            j++;
            ct++;
        }
        if (ct<k)cout<<"-1\n";
        else {for(i=0;i<k;i++)cout<<c[i]<<" ";}
        cout<<endl;
    }
    return 0;
}


>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
