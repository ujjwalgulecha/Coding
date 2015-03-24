<<<<<<< HEAD
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
long long int i;
long long int m,n=0;
long long int isPrime;
for(i=2;n<1000000;i++)
{
isPrime=1;
for(m=2;m<=sqrt(i);m++)
if(i%m==0){
isPrime=0;
break;
}
if(isPrime){
cout << i <<endl;
n++;
}
}
return 0;
}
=======
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
long long int i;
long long int m,n=0;
long long int isPrime;
for(i=2;n<1000000;i++)
{
isPrime=1;
for(m=2;m<=sqrt(i);m++)
if(i%m==0){
isPrime=0;
break;
}
if(isPrime){
cout << i <<endl;
n++;
}
}
return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
