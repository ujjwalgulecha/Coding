<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n,a[10000],i,b[10000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
        int pa=0,pb=0,max,great=0;
        bool flag[2]={0};
    for(i=0;i<n;i++)
    {
        pa+=a[i];pb+=b[i];
        if(pa>pb){flag[0]=1;flag[1]=0;max=pa-pb;}
        else{flag[1]=1;flag[0]=0;max=pb-pa;}
        if(max>great)great=max;
    }
    if(flag[0])cout<<"2 ";
    else cout<<"1 ";
    cout<<great<<endl;
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int n,a[10000],i,b[10000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
        int pa=0,pb=0,max,great=0;
        bool flag[2]={0};
    for(i=0;i<n;i++)
    {
        pa+=a[i];pb+=b[i];
        if(pa>pb){flag[0]=1;flag[1]=0;max=pa-pb;}
        else{flag[1]=1;flag[0]=0;max=pb-pa;}
        if(max>great)great=max;
    }
    if(flag[0])cout<<"2 ";
    else cout<<"1 ";
    cout<<great<<endl;
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
