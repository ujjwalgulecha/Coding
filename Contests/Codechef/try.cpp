<<<<<<< HEAD
#include<iostream>
#include<stdint.h>
using namespace std;
uint64_t PowMod(uint64_t x, uint64_t e);
#define mod 1000000007
int main()
{
    int t;
    uint64_t n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<PowMod(2,n)-1<<endl;
    }
    return 0;
}
uint64_t PowMod(uint64_t x, uint64_t e)
{
  uint64_t res;

  if (e == 0)
  {
    res = 1;
  }
  else if (e == 1)
  {
    res = x;
  }
  else
  {
    res = PowMod(x, e / 2);
    res = res * res % mod;
    if (e % 2)
      res = res * x % mod;
  }

  return res;
}
=======
#include<iostream>
#include<stdint.h>
using namespace std;
uint64_t PowMod(uint64_t x, uint64_t e);
#define mod 1000000007
int main()
{
    int t;
    uint64_t n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<PowMod(2,n)-1<<endl;
    }
    return 0;
}
uint64_t PowMod(uint64_t x, uint64_t e)
{
  uint64_t res;

  if (e == 0)
  {
    res = 1;
  }
  else if (e == 1)
  {
    res = x;
  }
  else
  {
    res = PowMod(x, e / 2);
    res = res * res % mod;
    if (e % 2)
      res = res * x % mod;
  }

  return res;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
