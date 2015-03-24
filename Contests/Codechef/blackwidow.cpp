<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int t,a[1004],b[1004],n,i,index,flag,great;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        great=-1;
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            if(a[i]>great){great=a[i];index=i;}
        }
        for(i=0;i<n;i++)
        {
            if(b[i]>=great&&i!=index){flag=0;break;}
            else flag=1;
        }
        if(!flag)cout<<"-1\n";
        else cout<<index+1<<endl;
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int t,a[1004],b[1004],n,i,index,flag,great;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        great=-1;
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            if(a[i]>great){great=a[i];index=i;}
        }
        for(i=0;i<n;i++)
        {
            if(b[i]>=great&&i!=index){flag=0;break;}
            else flag=1;
        }
        if(!flag)cout<<"-1\n";
        else cout<<index+1<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
