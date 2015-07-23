<<<<<<< HEAD
/* Program to find first 2 largest numbers in an array
by ujjwal gulecha
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,a[10],i;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("\n\n\n");
    int f=a[0],s=a[1],temp;//f=first largest. s= second largest
    if (f<s)
    {
        temp=s;
        s=f;
        f=temp;
    }
    for(i=2;i<n;i++)
    {
        if(a[i]>f)  //if a[i] is greater than greatest, make a[i] greatest and f as second highest
        {
            s=f;
            f=a[i];
        }
        else if (a[i]>s) //else if a[i] is greater than second highest, make second highest as a[i]
            s=a[i];
    }

printf("first and second highest are %d and %d\n",f,s);
}
=======
/* Program to find first 2 largest numbers in an array
by ujjwal gulecha
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,a[10],i;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("\n\n\n");
    int f=a[0],s=a[1],temp;//f=first largest. s= second largest
    if (f<s)
    {
        temp=s;
        s=f;
        f=temp;
    }
    for(i=2;i<n;i++)
    {
        if(a[i]>f)  //if a[i] is greater than greatest, make a[i] greatest and f as second highest
        {
            s=f;
            f=a[i];
        }
        else if (a[i]>s) //else if a[i] is greater than second highest, make second highest as a[i]
            s=a[i];
    }

printf("first and second highest are %d and %d\n",f,s);
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
