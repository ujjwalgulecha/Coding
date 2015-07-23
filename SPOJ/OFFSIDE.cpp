<<<<<<< HEAD
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,d,att[10001],def[10001],i,flag;
    while(1)
    {
        flag=0;
        cin>>a>>d;
        if(a==0&&d==0)break;
        for(i=0;i<a;i++)
            cin>>att[i];
        for(i=0;i<d;i++)
            cin>>def[i];
        sort(def,def+d);
        for(i=0;i<a;i++)
        {
            if(att[i]<def[1])
            {
                flag=1;
                break;
            }
        }
        if(flag)cout<<"Y\n";
        else cout<<"N\n";

    }
}
=======
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,d,att[10001],def[10001],i,flag;
    while(1)
    {
        flag=0;
        cin>>a>>d;
        if(a==0&&d==0)break;
        for(i=0;i<a;i++)
            cin>>att[i];
        for(i=0;i<d;i++)
            cin>>def[i];
        sort(def,def+d);
        for(i=0;i<a;i++)
        {
            if(att[i]<def[1])
            {
                flag=1;
                break;
            }
        }
        if(flag)cout<<"Y\n";
        else cout<<"N\n";

    }
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
