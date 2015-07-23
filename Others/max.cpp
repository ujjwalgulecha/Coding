<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    uint64_t l,i,j,ct,max=0;
    for(j=100;j<=1000000000000LL;j++)
    {

        ct=0;
        for(i=1;i<=sqrt(j);i++)
        {
            if(j%i==0){ct++;}
            if(j%(j/i)==0&&(j/i)!=i){ct++;}
        }
        if(ct>max)max=ct;
   }
    cout<<max<<endl;


}
=======
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    uint64_t l,i,j,ct,max=0;
    for(j=100;j<=1000000000000LL;j++)
    {

        ct=0;
        for(i=1;i<=sqrt(j);i++)
        {
            if(j%i==0){ct++;}
            if(j%(j/i)==0&&(j/i)!=i){ct++;}
        }
        if(ct>max)max=ct;
   }
    cout<<max<<endl;


}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
