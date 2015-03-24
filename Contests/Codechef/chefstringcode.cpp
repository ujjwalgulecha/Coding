<<<<<<< HEAD
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,i,x;
    char s[51];
    cin>>t;
    while(t--)
    {
        cin>>s;
        x=strlen(s);
        for(i=(x/2)-1;i>=0;i--)
            cout<<s[i];
        for(i=x-1;i>=x/2;i--)
            cout<<s[i];
            cout<<endl;
    }
    return 0;
}
=======
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t,i,x;
    char s[51];
    cin>>t;
    while(t--)
    {
        cin>>s;
        x=strlen(s);
        for(i=(x/2)-1;i>=0;i--)
            cout<<s[i];
        for(i=x-1;i>=x/2;i--)
            cout<<s[i];
            cout<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
