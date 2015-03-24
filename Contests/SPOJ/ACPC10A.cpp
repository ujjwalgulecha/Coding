<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a,b,c,diff,next;
    int ap;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)break;
        if(a+c==(2*b))ap=1;
        else ap=0;
        if(ap)
        {
            diff=b-a;
            next=c+diff;
            cout<<"AP "<<next<<endl;
        }
        else
        {
            diff=(b/a);
            next=a*pow(diff,3);
            cout<<"GP "<<next<<endl;
        }

    }
    return 0;

}
=======
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a,b,c,diff,next;
    int ap;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0)break;
        if(a+c==(2*b))ap=1;
        else ap=0;
        if(ap)
        {
            diff=b-a;
            next=c+diff;
            cout<<"AP "<<next<<endl;
        }
        else
        {
            diff=(b/a);
            next=a*pow(diff,3);
            cout<<"GP "<<next<<endl;
        }

    }
    return 0;

}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
