<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define LIMIT 100000/*size of integers array*/
#define PRIMES 10000 /*size of primes array*/
main()
{
    long int sum=0,great=0;
    int i,j,numbers[LIMIT];
    int primes[PRIMES];

    /*fill the array with natural numbers*/
    for (i=0;i<LIMIT;i++){
        numbers[i]=i+2;
    }

    /*sieve the non-primes*/
    for (i=0;i<LIMIT;i++){
        if (numbers[i]!=-1){
            for (j=2*numbers[i]-2;j<LIMIT;j+=numbers[i])
                numbers[j]=-1;
        }
    }

    /*transfer the primes to their own array*/
    j = 0;
    for (i=0;i<LIMIT&&j<PRIMES;i++)
        if (numbers[i]!=-1)
            primes[j++] = numbers[i];

            for(i=0;i<PRIMES;i++)
                printf("%d\n",primes[i]);

    /*
    for(i=0;i<100000;i++)
    {
        sum+=primes[i];
        if(sum<1000000)
        {
            for(i=1000000;i>1000;i--)
                if(sum==primes[i])
                great=sum;
        }
        if (sum>great)
     great=sum;

    }
    */
}







=======
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define LIMIT 100000/*size of integers array*/
#define PRIMES 10000 /*size of primes array*/
main()
{
    long int sum=0,great=0;
    int i,j,numbers[LIMIT];
    int primes[PRIMES];

    /*fill the array with natural numbers*/
    for (i=0;i<LIMIT;i++){
        numbers[i]=i+2;
    }

    /*sieve the non-primes*/
    for (i=0;i<LIMIT;i++){
        if (numbers[i]!=-1){
            for (j=2*numbers[i]-2;j<LIMIT;j+=numbers[i])
                numbers[j]=-1;
        }
    }

    /*transfer the primes to their own array*/
    j = 0;
    for (i=0;i<LIMIT&&j<PRIMES;i++)
        if (numbers[i]!=-1)
            primes[j++] = numbers[i];

            for(i=0;i<PRIMES;i++)
                printf("%d\n",primes[i]);

    /*
    for(i=0;i<100000;i++)
    {
        sum+=primes[i];
        if(sum<1000000)
        {
            for(i=1000000;i>1000;i--)
                if(sum==primes[i])
                great=sum;
        }
        if (sum>great)
     great=sum;

    }
    */
}







>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
