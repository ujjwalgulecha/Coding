<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    if ((int)x%5!=0||x+0.50>y)
        printf("%.2f",y);
   else
   {
       y=y-x-0.50;
        printf("%.2f",y);
   }
   return 0;
}
=======
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    if ((int)x%5!=0||x+0.50>y)
        printf("%.2f",y);
   else
   {
       y=y-x-0.50;
        printf("%.2f",y);
   }
   return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
