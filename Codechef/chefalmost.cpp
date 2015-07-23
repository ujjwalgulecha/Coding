<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
#define C 3
int main()
{
    int t,count;
    long long int x,i;
    cin>>t;
    while(t--)
    {
        count=1;
        cin>>x;
        for(i=1;i<=x/2;i++)
        {
            if(x%i==0)
                count++;
        }
        if (count==C)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
=======
#include<iostream>
#include<math.h>
using namespace std;
#define C 3
int main()
{
    int t,count;
    long long int x,i;
    cin>>t;
    while(t--)
    {
        count=1;
        cin>>x;
        for(i=1;i<=x/2;i++)
        {
            if(x%i==0)
                count++;
        }
        if (count==C)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
