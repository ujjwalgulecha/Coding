<<<<<<< HEAD
/* to print all permutations*/

#include<stdio.h>
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int i, int n)
{
   int j;
   if (i == n)
     printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); //backtrack
       }
   }
}
 int main()
{
   char a[] = "1234";
   permute(a, 0, 3);
   getchar();
   return 0;
}
=======
/* to print all permutations*/

#include<stdio.h>
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int i, int n)
{
   int j;
   if (i == n)
     printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); //backtrack
       }
   }
}
 int main()
{
   char a[] = "1234";
   permute(a, 0, 3);
   getchar();
   return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
