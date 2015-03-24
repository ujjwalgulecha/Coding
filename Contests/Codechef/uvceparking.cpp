<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int luck[6],a[6];
    int i,ct,j,k,z,lucky,lflag;
    for(i=0;i<6;i++)
    {
        cin>>luck[i];
    }
    cin>>lucky;
    for(i=0;i<5;i++)
    {
        ct=0;
        lflag=0;
        for(j=0;j<6;j++)
        {
            cin>>a[j];
            if(a[j]==lucky){lflag=1;}
            else
            {
                for(z=0;z<6;z++)
                {
                    if(a[j]==luck[z])ct++;
                }
            }
        }
        if(ct<=2)cout<<"No Parking slot\n";
            else if(ct==3)cout<<"Fifth Parking slot\n";
            else if(ct==4)cout<<"Fourth Parking slot\n";
            else if(ct==5&&lflag==0)cout<<"Third Parking slot\n";
            else if(ct==5&&lflag==1)cout<<"Second Parking slot\n";
            else cout<<"First Parking slot\n";
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int luck[6],a[6];
    int i,ct,j,k,z,lucky,lflag;
    for(i=0;i<6;i++)
    {
        cin>>luck[i];
    }
    cin>>lucky;
    for(i=0;i<5;i++)
    {
        ct=0;
        lflag=0;
        for(j=0;j<6;j++)
        {
            cin>>a[j];
            if(a[j]==lucky){lflag=1;}
            else
            {
                for(z=0;z<6;z++)
                {
                    if(a[j]==luck[z])ct++;
                }
            }
        }
        if(ct<=2)cout<<"No Parking slot\n";
            else if(ct==3)cout<<"Fifth Parking slot\n";
            else if(ct==4)cout<<"Fourth Parking slot\n";
            else if(ct==5&&lflag==0)cout<<"Third Parking slot\n";
            else if(ct==5&&lflag==1)cout<<"Second Parking slot\n";
            else cout<<"First Parking slot\n";
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
