<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[6400],b[80][80],sum;
    FILE *fp;
    int i=0,j,k=0;
    fp=fopen("matrix.txt","r");
    while(1)
    {
        if(i==6400)break;
        fscanf(fp,"%d",&a[i]);
        i++;
    }
    for(i=0;i<80;i++)
    {
        for(j=0;j<80;j++)
        {
            b[i][j]=a[k];
            k++;

        }
    }
    sum=check(b);
    printf("The sum is %d",sum);
    fclose(fp);
    return 0;
}
int check(int b[80][80])
{
    int sum,i,j;
    sum=b[0][0]+b[79][79];

        for(i=0;i<80;i++)
        {
            for(j=0;j<80;j++)
            {
                if(b[i][j+1]>b[i+1][j])
                {
                    sum+=b[i][j+1];
                }
                else
                {
                  sum+=b[i+1][j];
                  break;
                  k=j;
                }

            }
        }
    return sum;
}


















=======
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[6400],b[80][80],sum;
    FILE *fp;
    int i=0,j,k=0;
    fp=fopen("matrix.txt","r");
    while(1)
    {
        if(i==6400)break;
        fscanf(fp,"%d",&a[i]);
        i++;
    }
    for(i=0;i<80;i++)
    {
        for(j=0;j<80;j++)
        {
            b[i][j]=a[k];
            k++;

        }
    }
    sum=check(b);
    printf("The sum is %d",sum);
    fclose(fp);
    return 0;
}
int check(int b[80][80])
{
    int sum,i,j;
    sum=b[0][0]+b[79][79];

        for(i=0;i<80;i++)
        {
            for(j=0;j<80;j++)
            {
                if(b[i][j+1]>b[i+1][j])
                {
                    sum+=b[i][j+1];
                }
                else
                {
                  sum+=b[i+1][j];
                  break;
                  k=j;
                }

            }
        }
    return sum;
}


















>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
