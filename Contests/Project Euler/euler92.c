<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
int count=0;
main()
{
   long int i;
    for(i=1;i<10000000;i++)
        square(i);
printf("%d",count);
}

void square(long int i)
{
    long int sum,a,b;
    if (i==1||i==89)
    {
        if(i==89)
        {
            count++;
            return;
        }
        else return;
    }
    else
    {
        sum=0;
        a=i;
        while(a>0)
        {
            b=a%10;
            sum+=(b*b);
            a/=10;
        }
        square(sum);
    }
}







=======
#include<stdio.h>
#include<stdlib.h>
int count=0;
main()
{
   long int i;
    for(i=1;i<10000000;i++)
        square(i);
printf("%d",count);
}

void square(long int i)
{
    long int sum,a,b;
    if (i==1||i==89)
    {
        if(i==89)
        {
            count++;
            return;
        }
        else return;
    }
    else
    {
        sum=0;
        a=i;
        while(a>0)
        {
            b=a%10;
            sum+=(b*b);
            a/=10;
        }
        square(sum);
    }
}







>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
