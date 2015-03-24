<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int t;
    int h1,m1,s1,h2,m2,s2;
    long long int time1,time2,time,dist;
    cin>>t;
    while(t--)
    {
        cin>>h1>>m1>>s1>>h2>>m2>>s2;
        time1=(h1*60*60)+(m1*60)+s1;
        time2=(h2*60*60)+(m2*60)+s2;
        time=time2-time1;
        dist=time%400;
        if(((dist>=0&&dist<=99))||(dist>=200&&dist<=299))cout<<"S\n";
        else cout<<"C\n";
    }
    return 0;
}

=======
#include<iostream>
using namespace std;
int main()
{
    int t;
    int h1,m1,s1,h2,m2,s2;
    long long int time1,time2,time,dist;
    cin>>t;
    while(t--)
    {
        cin>>h1>>m1>>s1>>h2>>m2>>s2;
        time1=(h1*60*60)+(m1*60)+s1;
        time2=(h2*60*60)+(m2*60)+s2;
        time=time2-time1;
        dist=time%400;
        if(((dist>=0&&dist<=99))||(dist>=200&&dist<=299))cout<<"S\n";
        else cout<<"C\n";
    }
    return 0;
}

>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
