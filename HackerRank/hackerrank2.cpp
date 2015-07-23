<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x1,x2,y1,y2,a,b;
    char c;
    cin>>n;
   // cin>>a>>b;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>c;
            if(c=='m'){x1=i;y1=j;}
            if(c=='p'){x2=i;y2=j;}
        }
    }
    while(1)
    {
        if(x1==x2&&y1==y2)break;
        if(x1<x2){cout<<"DOWN"<<endl;x1++;}
        else if(x2<x1){cout<<"UP"<<endl;x1--;}
        else if(y1<y2){cout<<"RIGHT"<<endl;y1++;}
        else if(y2<y1){cout<<"LEFT"<<endl;y1--;}
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x1,x2,y1,y2,a,b;
    char c;
    cin>>n;
   // cin>>a>>b;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>c;
            if(c=='m'){x1=i;y1=j;}
            if(c=='p'){x2=i;y2=j;}
        }
    }
    while(1)
    {
        if(x1==x2&&y1==y2)break;
        if(x1<x2){cout<<"DOWN"<<endl;x1++;}
        else if(x2<x1){cout<<"UP"<<endl;x1--;}
        else if(y1<y2){cout<<"RIGHT"<<endl;y1++;}
        else if(y2<y1){cout<<"LEFT"<<endl;y1--;}
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
