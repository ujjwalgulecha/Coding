<<<<<<< HEAD
#include<iostream>
#include<string.h>
#include<stdio.h>
char s1[1010],s2[1010];
using namespace std;
int fun(int i,int j)
{    if(i==strlen(s1) || j==strlen(s2))
                      return 1;
                      if(s1[i]==s2[j])
                                      return fun(i+1,j+1);
                      return (fun(i+1,j)+fun(i,j+1));
}
void create_answer(int n,int i,int j) 
{    int l1=strlen(s1),l2=strlen(s2);
     if(i<l1 && j<l2)
    if(s1[i] == s2[j]) 
    {        printf("%c",s1[i]);
          
              create_answer(n,i+1,j+1);
     }
    else if(s1[i]<s2[j])
     {
         if(n <= fun(i+1, j)) 
         {    printf("%c",s1[i]);
              create_answer(n, i+1, j);
         }
        else 
        {    printf("%c",s2[j]); 
       
             create_answer(n-fun(i+1,j), i, j+1);
        }
    }
    else {
        
        if(n <= fun(i,j+1)) {
             printf("%c",s2[j]);
         create_answer(n, i, j+1);
         }
        else {
             printf("%c", s1[i]); 
       
        create_answer(n-fun(i,j+1), i+1, j);
        }
    }
    else if(i<l1) {
         printf("%c",s1[i]); 
         create_answer(n,i+1,j+1);
          } 
          else if(j<l2)
           {   printf("%c",s2[j]); 
           create_answer(n,i+1,j+1);
            }
}
                       

int main()
{   int i,j,t;
    int n;
    scanf("%d",&t);
    while(t--)
    {         scanf("%s %s",s1,s2);
              scanf("%d",&n);
           
              if(n > fun(0,0))
              {          
                         printf("NO ANSWER\n",fun(0,0));
              }
              else
             { create_answer(n,0,0);
             printf("\n");
             }
}
    


}
=======
#include<iostream>
#include<string.h>
#include<stdio.h>
char s1[1010],s2[1010];
using namespace std;
int fun(int i,int j)
{    if(i==strlen(s1) || j==strlen(s2))
                      return 1;
                      if(s1[i]==s2[j])
                                      return fun(i+1,j+1);
                      return (fun(i+1,j)+fun(i,j+1));
}
void create_answer(int n,int i,int j) 
{    int l1=strlen(s1),l2=strlen(s2);
     if(i<l1 && j<l2)
    if(s1[i] == s2[j]) 
    {        printf("%c",s1[i]);
          
              create_answer(n,i+1,j+1);
     }
    else if(s1[i]<s2[j])
     {
         if(n <= fun(i+1, j)) 
         {    printf("%c",s1[i]);
              create_answer(n, i+1, j);
         }
        else 
        {    printf("%c",s2[j]); 
       
             create_answer(n-fun(i+1,j), i, j+1);
        }
    }
    else {
        
        if(n <= fun(i,j+1)) {
             printf("%c",s2[j]);
         create_answer(n, i, j+1);
         }
        else {
             printf("%c", s1[i]); 
       
        create_answer(n-fun(i,j+1), i+1, j);
        }
    }
    else if(i<l1) {
         printf("%c",s1[i]); 
         create_answer(n,i+1,j+1);
          } 
          else if(j<l2)
           {   printf("%c",s2[j]); 
           create_answer(n,i+1,j+1);
            }
}
                       

int main()
{   int i,j,t;
    int n;
    scanf("%d",&t);
    while(t--)
    {         scanf("%s %s",s1,s2);
              scanf("%d",&n);
           
              if(n > fun(0,0))
              {          
                         printf("NO ANSWER\n",fun(0,0));
              }
              else
             { create_answer(n,0,0);
             printf("\n");
             }
}
    


}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
