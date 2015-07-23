<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
double len(int a,int b,int c,int d);
int main()
{
    int t,n,i,x1,y1,x2,y2,x3,y3,loweri,greati;
    double s,a,b,c,area,low,great;
        loweri=1;
        greati=1;
        low=999999999.0;
        great=-1.0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x1>>y1>>x2>>y2>>x3>>y3;
            a=len(x1,y1,x2,y2);
            b=len(x2,y2,x3,y3);
            c=len(x3,y3,x1,y1);
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            //cout<<"area" <<i+1<<"="<<area<<endl;
            if(area>=great){greati=i+1;great=area;}
            if(area<=low){loweri=i+1;low=area;}
        }
        cout<<loweri<<" "<<greati<<endl;

    return 0;
}
double len(int a,int b,int c,int d)
{
    return (sqrt(((a-c)*(a-c))+((b-d)*(b-d))));
}
=======
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
double len(int a,int b,int c,int d);
int main()
{
    int t,n,i,x1,y1,x2,y2,x3,y3,loweri,greati;
    double s,a,b,c,area,low,great;
        loweri=1;
        greati=1;
        low=999999999.0;
        great=-1.0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x1>>y1>>x2>>y2>>x3>>y3;
            a=len(x1,y1,x2,y2);
            b=len(x2,y2,x3,y3);
            c=len(x3,y3,x1,y1);
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            //cout<<"area" <<i+1<<"="<<area<<endl;
            if(area>=great){greati=i+1;great=area;}
            if(area<=low){loweri=i+1;low=area;}
        }
        cout<<loweri<<" "<<greati<<endl;

    return 0;
}
double len(int a,int b,int c,int d)
{
    return (sqrt(((a-c)*(a-c))+((b-d)*(b-d))));
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
