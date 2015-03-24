<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t,n,mon;
    while(scanf("%lld",&n) != EOF)
       {
           mon=(n/2+n/3+n/4);
        if (mon>n)printf("%lld",mon);
        else printf("%lld\n",n);
    }
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int t,n,mon;
    while(scanf("%lld",&n) != EOF)
       {
           mon=(n/2+n/3+n/4);
        if (mon>n)printf("%lld",mon);
        else printf("%lld\n",n);
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
