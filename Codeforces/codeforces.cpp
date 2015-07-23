<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int n,mag,i,mag1;
    int ct=1;
    cin>>n;
    cin>>mag;
    for(i=1;i<n;i++)
    {
        cin>>mag1;
        if(mag==mag1){continue;mag=mag1;}
        else
        {
            ct++;
            mag=mag1;
        }
    }
    cout<<ct<<endl;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int n,mag,i,mag1;
    int ct=1;
    cin>>n;
    cin>>mag;
    for(i=1;i<n;i++)
    {
        cin>>mag1;
        if(mag==mag1){continue;mag=mag1;}
        else
        {
            ct++;
            mag=mag1;
        }
    }
    cout<<ct<<endl;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
