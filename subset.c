<<<<<<< HEAD
#include <stdio.h>
int a[50],n;
void subset(int,int,int);
main()
{
int i,x,size;
printf("Enter the size of main set : ");
scanf("%d",&size);
printf("Enter the elements of main set :");
for(x=0;x<size;x++)
scanf("%d",&a[x]);
n=size; // While defining your own value of n, comment out this line
//and uncomment the next two lines
/* printf(�Enter the size of subset : �);
scanf(�%d�,&n);  */
printf("The subsets are :\n");
for(i=1;i<=n;i++)
subset(0,0,i);
}
void subset(int start,int index,int no_of_subset)
{
int i,j;
if(index-start+1==no_of_subset)
{
if(no_of_subset==1)
{
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
else
{
for(j=index;j<n;j++)
{
for(i=start;i<index;i++)
printf("%d",a[i]);
printf("%d\n",a[j]);
}
if(start!=n-no_of_subset)
subset(start+1,start+1,no_of_subset);
}
}
else
{
subset(start,index+1,no_of_subset);
}
}
=======
#include <stdio.h>
int a[50],n;
void subset(int,int,int);
main()
{
int i,x,size;
printf("Enter the size of main set : ");
scanf("%d",&size);
printf("Enter the elements of main set :");
for(x=0;x<size;x++)
scanf("%d",&a[x]);
n=size; // While defining your own value of n, comment out this line
//and uncomment the next two lines
/* printf(�Enter the size of subset : �);
scanf(�%d�,&n);  */
printf("The subsets are :\n");
for(i=1;i<=n;i++)
subset(0,0,i);
}
void subset(int start,int index,int no_of_subset)
{
int i,j;
if(index-start+1==no_of_subset)
{
if(no_of_subset==1)
{
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
else
{
for(j=index;j<n;j++)
{
for(i=start;i<index;i++)
printf("%d",a[i]);
printf("%d\n",a[j]);
}
if(start!=n-no_of_subset)
subset(start+1,start+1,no_of_subset);
}
}
else
{
subset(start,index+1,no_of_subset);
}
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
