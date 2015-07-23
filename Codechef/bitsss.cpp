<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    long long int n,i,m,j,no;
    long long int q;
    string c;
    cin>>n;
    cin>>q;
    long long int a[100001];
    for(int z=1;z<=100000;z++)a[z]=0;
    while(q--)
    {
        cin>>c;
        if(c[0]=='U')
        {
            cin>>i>>m;
            for(j=1;j<=n/i;j++)
            {
                a[j*i]+=m;
            }
        }
        else
        {
            cin>>no;
            cout<<a[no]<<endl;
        }

    }
        return 0;


    }
=======
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    long long int n,i,m,j,no;
    long long int q;
    string c;
    cin>>n;
    cin>>q;
    long long int a[100001];
    for(int z=1;z<=100000;z++)a[z]=0;
    while(q--)
    {
        cin>>c;
        if(c[0]=='U')
        {
            cin>>i>>m;
            for(j=1;j<=n/i;j++)
            {
                a[j*i]+=m;
            }
        }
        else
        {
            cin>>no;
            cout<<a[no]<<endl;
        }

    }
        return 0;


    }
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
