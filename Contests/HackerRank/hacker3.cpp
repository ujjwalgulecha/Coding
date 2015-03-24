<<<<<<< HEAD
#include<iostream>
#include<stdint.h>
uint64_t hrank(uint64_t x);
using namespace std;
uint64_t k;
int main()
{
    uint64_t x;
    cin>>k>>x;
    cout<<hrank(x)<<endl;
    return 0;
}
uint64_t hrank(uint64_t x)
{
    if(x>=0&&k>x)return 1;
    if(x>=k&&x%k==0){return (hrank(x–k)+hrank(x/k));}
    else return hrank(x–1);
}
=======
#include<iostream>
#include<stdint.h>
uint64_t hrank(uint64_t x);
using namespace std;
uint64_t k;
int main()
{
    uint64_t x;
    cin>>k>>x;
    cout<<hrank(x)<<endl;
    return 0;
}
uint64_t hrank(uint64_t x)
{
    if(x>=0&&k>x)return 1;
    if(x>=k&&x%k==0){return (hrank(x–k)+hrank(x/k));}
    else return hrank(x–1);
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
