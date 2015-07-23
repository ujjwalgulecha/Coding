<<<<<<< HEAD
/* program for evaluating postfix expression
-Ujjwal Gulecha
*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
float compute(float op1,float op2,char symbol)
{
    switch(symbol)
    {
        case '+':return op1+op2;
        case '-':return op1-op2;
        case '*':return op1*op2;
        case '/':return op1/op2;
        case '^':return pow(op1,op2);

    }
}
main()
{
    printf("enter the postfix expression\n");
    char postfix[20],symbol;
    float op1,op2,s[20],res;
    int top=-1;
    scanf("%s",postfix);
    int i;
    for(i=0;i<strlen(postfix);i++)
    {

        symbol=postfix[i];
        if(isalpha(symbol)){printf("no alphabets sucker!");exit(0);}
        if(isdigit(symbol))
        {
            s[++top]=symbol-'0';
        }
        else
        {
            op2=s[top--];
            op1=s[top--];
            res=compute(op1,op2,symbol);
            s[++top]=res;
        }
    }
    res=s[top--];
        printf("result is %0.2f\n",res);
        printf("thank you for using me :P .....pun intended\n");
        printf("enter key to exit\n");
        exit(0);
}






=======
/* program for evaluating postfix expression
-Ujjwal Gulecha
*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
float compute(float op1,float op2,char symbol)
{
    switch(symbol)
    {
        case '+':return op1+op2;
        case '-':return op1-op2;
        case '*':return op1*op2;
        case '/':return op1/op2;
        case '^':return pow(op1,op2);

    }
}
main()
{
    printf("enter the postfix expression\n");
    char postfix[20],symbol;
    float op1,op2,s[20],res;
    int top=-1;
    scanf("%s",postfix);
    int i;
    for(i=0;i<strlen(postfix);i++)
    {

        symbol=postfix[i];
        if(isalpha(symbol)){printf("no alphabets sucker!");exit(0);}
        if(isdigit(symbol))
        {
            s[++top]=symbol-'0';
        }
        else
        {
            op2=s[top--];
            op1=s[top--];
            res=compute(op1,op2,symbol);
            s[++top]=res;
        }
    }
    res=s[top--];
        printf("result is %0.2f\n",res);
        printf("thank you for using me :P .....pun intended\n");
        printf("enter key to exit\n");
        exit(0);
}






>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
