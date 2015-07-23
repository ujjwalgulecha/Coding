<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int sum,i,j;
    for(i=0;i<1000000;i++)
    {
        sum=1;
        for(j=0;j<=i;j++)
        {
            sum=((sum<<1)%1000000007);
        }
        cout<<sum<<"LL,";
    }

}
=======
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int sum,i,j;
    for(i=0;i<1000000;i++)
    {
        sum=1;
        for(j=0;j<=i;j++)
        {
            sum=((sum<<1)%1000000007);
        }
        cout<<sum<<"LL,";
    }

}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
