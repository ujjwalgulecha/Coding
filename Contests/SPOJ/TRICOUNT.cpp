<<<<<<< HEAD
#include<iostream>
#include<math.h>
#include<stdint.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    uint64_t n,res;
    while(t--)
    {
        cin>>n;
        floor(res=(n*(n+2)*((2*n)+1))/8);
        cout<<res<<endl;
    }
    return 0;
}
=======
#include<iostream>
#include<math.h>
#include<stdint.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    uint64_t n,res;
    while(t--)
    {
        cin>>n;
        floor(res=(n*(n+2)*((2*n)+1))/8);
        cout<<res<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
