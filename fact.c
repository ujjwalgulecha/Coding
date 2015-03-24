<<<<<<< HEAD
/* recursive factorial program
-Ujjwal Gulecha
*/
#include<stdio.h>
main()
{
    long long unsigned int n,s;
    printf("enter which number you want\n");
    scanf("%d",&n);
    s=fact(n);
    printf("factorial is %llu",s);
}
int fact(int n)
{
    if(n==0)return 1;
    return n*fact(n-1);
}
=======
/* recursive factorial program
-Ujjwal Gulecha
*/
#include<stdio.h>
main()
{
    long long unsigned int n,s;
    printf("enter which number you want\n");
    scanf("%d",&n);
    s=fact(n);
    printf("factorial is %llu",s);
}
int fact(int n)
{
    if(n==0)return 1;
    return n*fact(n-1);
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
