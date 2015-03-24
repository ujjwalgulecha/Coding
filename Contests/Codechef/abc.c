<<<<<<< HEAD
#include<stdio.h>
#include<string.h>

void fashion(int input1[],int n)
{
    int sum=input1[n/2];
	int i,x=n/2;
	for(i=x+1;i<n;i++)
	{
		if(input1[i]==input1[x-1])sum+=input1[i];
		x--;
	}
	printf("%d",sum);
}
int main()
{
    int input1[]={3,4,5,6,3};
    int n=sizeof(input1)/sizeof(int);
    fashion(input1,n);
    return 0;
}
=======
#include<stdio.h>
#include<string.h>

void fashion(int input1[],int n)
{
    int sum=input1[n/2];
	int i,x=n/2;
	for(i=x+1;i<n;i++)
	{
		if(input1[i]==input1[x-1])sum+=input1[i];
		x--;
	}
	printf("%d",sum);
}
int main()
{
    int input1[]={3,4,5,6,3};
    int n=sizeof(input1)/sizeof(int);
    fashion(input1,n);
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
