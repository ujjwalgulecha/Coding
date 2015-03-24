<<<<<<< HEAD
#include<iostream>
#include<math.h>
#include<stdint.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
#include<cstdio>
#define gc getchar
using namespace std;
void scanint(uint64_t &x)
{
    register uint64_t c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
bool square(uint64_t number);
int main()
{
    int t,flag;
    uint64_t i,j,one,value,s,sqr;
    cin>>t;
    //unsigned long long a[100000];
while(t--)
{
    flag=0;
    scanint(s);
    one=s*s;
    sqr=sqrt(s);
    for(i=1;i<s-sqr;i++)
    {
        value=one-((s-i)*(s-i));
        if ( square (value) )
        {
            printf("PERFECT\n");
            flag=1;
            break;
        }
    }
        if(flag==0)
        printf("IMPERFECT\n");
    }
    return 0;
}
bool square(uint64_t number) {
    uint64_t nod = 0;
    uint64_t sqr =(uint64_t)sqrt (number);
    //Correction if the number is a perfect square
    if (sqr*sqr== number) {
        return true;
    }

    return false;
}
=======
#include<iostream>
#include<math.h>
#include<stdint.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
#include<cstdio>
#define gc getchar
using namespace std;
void scanint(uint64_t &x)
{
    register uint64_t c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
bool square(uint64_t number);
int main()
{
    int t,flag;
    uint64_t i,j,one,value,s,sqr;
    cin>>t;
    //unsigned long long a[100000];
while(t--)
{
    flag=0;
    scanint(s);
    one=s*s;
    sqr=sqrt(s);
    for(i=1;i<s-sqr;i++)
    {
        value=one-((s-i)*(s-i));
        if ( square (value) )
        {
            printf("PERFECT\n");
            flag=1;
            break;
        }
    }
        if(flag==0)
        printf("IMPERFECT\n");
    }
    return 0;
}
bool square(uint64_t number) {
    uint64_t nod = 0;
    uint64_t sqr =(uint64_t)sqrt (number);
    //Correction if the number is a perfect square
    if (sqr*sqr== number) {
        return true;
    }

    return false;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
