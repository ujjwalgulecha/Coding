<<<<<<< HEAD
/* Program to convert given decimal number into hexa, octal and binary format!
-Ujjwal Gulecha
*/
#include<stdio.h>
#include<stdlib.h>
main()
{   int n,ch;
    display();
    for(;;)
    {
    printf("1=Convert to Hexa\n2=Convert to Octal\n3=Convert to Binary\n4=Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Enter the decimal number:\n");scanf("%d",&n);
                printf("The converted hexadecimal number is:\n");convert(n,0);break;
        case 2:printf("Enter the decimal number:\n");scanf("%d",&n);
                printf("The converted octal number is\n");convert(n,1);break;
        case 3:printf("Enter the decimal number:\n");scanf("%d",&n);
                printf("The converted binary number is\n");convert(n,2);break;
        default:printf("Bye");exit(0);
    }
    }
}
void convert(int n,int ch)
{   int count=-1,a[10],i=0,x;
    if(ch==0) x=16; else if(ch==1) x=8; else x=2;
    while(n>0)
    {
        a[i]=n%x;
        n/=x;
        count++;
        i++;
    }

    for(i=count;i>=0;i--)
    {
        if (a[i]>=10)
        {
            switch(a[i])
            {
                case 10:printf("A");break;
                case 11:printf("B");break;
                case 12:printf("C");break;
                case 13:printf("D");break;
                case 14:printf("E");break;
                case 15:printf("F");break;
            }
        }

        else
            printf("%d",a[i]);
    }
    printf("\n");
return;
}
void display()
{
    printf("Welcome to the Decimal Converter Program!!\n");
    printf("-----------------------------------------\n");
}
=======
/* Program to convert given decimal number into hexa, octal and binary format!
-Ujjwal Gulecha
*/
#include<stdio.h>
#include<stdlib.h>
main()
{   int n,ch;
    display();
    for(;;)
    {
    printf("1=Convert to Hexa\n2=Convert to Octal\n3=Convert to Binary\n4=Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Enter the decimal number:\n");scanf("%d",&n);
                printf("The converted hexadecimal number is:\n");convert(n,0);break;
        case 2:printf("Enter the decimal number:\n");scanf("%d",&n);
                printf("The converted octal number is\n");convert(n,1);break;
        case 3:printf("Enter the decimal number:\n");scanf("%d",&n);
                printf("The converted binary number is\n");convert(n,2);break;
        default:printf("Bye");exit(0);
    }
    }
}
void convert(int n,int ch)
{   int count=-1,a[10],i=0,x;
    if(ch==0) x=16; else if(ch==1) x=8; else x=2;
    while(n>0)
    {
        a[i]=n%x;
        n/=x;
        count++;
        i++;
    }

    for(i=count;i>=0;i--)
    {
        if (a[i]>=10)
        {
            switch(a[i])
            {
                case 10:printf("A");break;
                case 11:printf("B");break;
                case 12:printf("C");break;
                case 13:printf("D");break;
                case 14:printf("E");break;
                case 15:printf("F");break;
            }
        }

        else
            printf("%d",a[i]);
    }
    printf("\n");
return;
}
void display()
{
    printf("Welcome to the Decimal Converter Program!!\n");
    printf("-----------------------------------------\n");
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
