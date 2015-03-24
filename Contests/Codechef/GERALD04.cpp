<<<<<<< HEAD
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t,time1,time2,time,hertime;
    float h1,h2,m1,m2,dist,plan1,plan2;
    char ch1,ch2;
    cin>>t;
    while(t--)
    {
        scanf("%f%c%f",&h1,&ch1,&m1);
        scanf("%f%c%f",&h2,&ch2,&m2);
        cin>>dist;
        time1=(h1*60)+m1;
        time2=(h2*60)+m2;
        time=time1-time2;
        plan1=time+dist;
        if(2*dist<=time)
            plan2=time;
        else
        {
            hertime=time-dist;
            if(hertime==0)
            {
                plan2=(dist+(dist/2));
            }
            if(hertime>0)
            {
                plan2=(dist+hertime+((dist-hertime)/2.0));
            }
            if (hertime<0)
            {
                hertime=hertime*-1;
                plan2=(dist+hertime+((dist-hertime)/2.0));
            }
        }
        printf("%.1f %.1f\n",plan1,plan2);
    }
    return 0;
}
=======
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t,time1,time2,time,hertime;
    float h1,h2,m1,m2,dist,plan1,plan2;
    char ch1,ch2;
    cin>>t;
    while(t--)
    {
        scanf("%f%c%f",&h1,&ch1,&m1);
        scanf("%f%c%f",&h2,&ch2,&m2);
        cin>>dist;
        time1=(h1*60)+m1;
        time2=(h2*60)+m2;
        time=time1-time2;
        plan1=time+dist;
        if(2*dist<=time)
            plan2=time;
        else
        {
            hertime=time-dist;
            if(hertime==0)
            {
                plan2=(dist+(dist/2));
            }
            if(hertime>0)
            {
                plan2=(dist+hertime+((dist-hertime)/2.0));
            }
            if (hertime<0)
            {
                hertime=hertime*-1;
                plan2=(dist+hertime+((dist-hertime)/2.0));
            }
        }
        printf("%.1f %.1f\n",plan1,plan2);
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
