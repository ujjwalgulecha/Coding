<<<<<<< HEAD
#include<iostream>
using namespace std;
long long int s;
bool check(long long int x);
long long int reverse(long long int i);
int main()
{
    long long int i,j,sum=0;
    for(i=1;i<100000000;i++)
    {
        j=reverse(i);
        if(i%10==0)continue;
        if(check(i+j))
        {
            sum++;
        }
    }

    cout<<sum;
    return 0;
}
long long int reverse(long long int i)
{
   long long int rev=0;
   int mod;
while (i>0)
{
mod=i%10;
rev=(rev*10)+mod;
i/=10;
}
rev+=0;
    return rev;
}
bool check(long long int x)
{
    int mod;
    s=x;
    while (x>0)
{
mod=x%10;
if(mod%2==0)return false;
x/=10;
}
return true;
}
=======
#include<iostream>
using namespace std;
long long int s;
bool check(long long int x);
long long int reverse(long long int i);
int main()
{
    long long int i,j,sum=0;
    for(i=1;i<100000000;i++)
    {
        j=reverse(i);
        if(i%10==0)continue;
        if(check(i+j))
        {
            sum++;
        }
    }

    cout<<sum;
    return 0;
}
long long int reverse(long long int i)
{
   long long int rev=0;
   int mod;
while (i>0)
{
mod=i%10;
rev=(rev*10)+mod;
i/=10;
}
rev+=0;
    return rev;
}
bool check(long long int x)
{
    int mod;
    s=x;
    while (x>0)
{
mod=x%10;
if(mod%2==0)return false;
x/=10;
}
return true;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
