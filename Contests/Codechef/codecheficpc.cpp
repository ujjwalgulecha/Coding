<<<<<<< HEAD
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string b;
    string a[100];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(int j=0;j<n;j++)
    {
        b=a;
        if(strrev(b)==a[i])
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}



=======
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string b;
    string a[100];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(int j=0;j<n;j++)
    {
        b=a;
        if(strrev(b)==a[i])
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}



>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
