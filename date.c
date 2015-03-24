<<<<<<< HEAD
/*converts given date to word date
by ujjwal gulecha
*/
#include<stdio.h>
#include<stdlib.h>
char *m[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
char *check;
main()
{
    int day,month,year;
    printf("Enter the date in DD-MM-YEAR format\n");
    scanf("%d-%d-%d",&day,&month,&year);
    display(day,month,year);
}
void display(int day,int month,int year)
{
    monthcheck(month);
    int a=(year%400==0||(year%100!=0&&year%4==0));
    if(!a)
    {
        if(month==2)
        {
            if(day>=29)
                {
                    printf("Invalid Date!");
                    exit(0);
                }
        }
        monthcheck2(month,day);
            if(day>31)
                {printf("Invalid Date!");
                exit(0);
                    }
                    daycheck(day);
        printf("The Date is %d%s %s,%d",day,check,m[month-1],year);
                    printf("\n");
    }
        if(a)
            {
                if(month==2)
                {
                    if(day>28)
                        {
                        printf("Invalid Date!");
                        exit(0);
                        }
                }
        monthcheck2(month,day);
            if(day>31)
                {
                printf("Invalid Date!");
                exit(0);
                }
                    daycheck(day);
                    printf("The Date is %d%s %s,%d",day,check,m[month-1],year);
                    printf("\n");
            }
}

void monthcheck(int month)
{
if(month>12)
    {
        printf("Enter month lesser than or equal to 12!");
        exit(0);
    }
}
void monthcheck2(int month,int day)
{

    if(month==4||month==6||month==9||month==11)
        {
            if(day>30)
            {
                printf("Invalid Date!");
                exit(0);
            }
        }

}
void daycheck(int day)
{
    if (day==1||day==31||day==21)
       {check="st";return;}
    if(day==2||day==22)
        {check="nd";return;}
    if(day==3||day==23)
        {check=="rd";return;}
        check="th";
        return;
}



















=======
/*converts given date to word date
by ujjwal gulecha
*/
#include<stdio.h>
#include<stdlib.h>
char *m[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
char *check;
main()
{
    int day,month,year;
    printf("Enter the date in DD-MM-YEAR format\n");
    scanf("%d-%d-%d",&day,&month,&year);
    display(day,month,year);
}
void display(int day,int month,int year)
{
    monthcheck(month);
    int a=(year%400==0||(year%100!=0&&year%4==0));
    if(!a)
    {
        if(month==2)
        {
            if(day>=29)
                {
                    printf("Invalid Date!");
                    exit(0);
                }
        }
        monthcheck2(month,day);
            if(day>31)
                {printf("Invalid Date!");
                exit(0);
                    }
                    daycheck(day);
        printf("The Date is %d%s %s,%d",day,check,m[month-1],year);
                    printf("\n");
    }
        if(a)
            {
                if(month==2)
                {
                    if(day>28)
                        {
                        printf("Invalid Date!");
                        exit(0);
                        }
                }
        monthcheck2(month,day);
            if(day>31)
                {
                printf("Invalid Date!");
                exit(0);
                }
                    daycheck(day);
                    printf("The Date is %d%s %s,%d",day,check,m[month-1],year);
                    printf("\n");
            }
}

void monthcheck(int month)
{
if(month>12)
    {
        printf("Enter month lesser than or equal to 12!");
        exit(0);
    }
}
void monthcheck2(int month,int day)
{

    if(month==4||month==6||month==9||month==11)
        {
            if(day>30)
            {
                printf("Invalid Date!");
                exit(0);
            }
        }

}
void daycheck(int day)
{
    if (day==1||day==31||day==21)
       {check="st";return;}
    if(day==2||day==22)
        {check="nd";return;}
    if(day==3||day==23)
        {check=="rd";return;}
        check="th";
        return;
}



















>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
