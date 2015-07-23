<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int n,i;
    float avg;
    long long int x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x);
        sum+=x;
    }
    avg=(float)sum/2.0;
    printf("%.1f\n",avg);
    return 0;
}
=======
#include<stdio.h>
int main()
{
    int n,i;
    float avg;
    long long int x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x);
        sum+=x;
    }
    avg=(float)sum/2.0;
    printf("%.1f\n",avg);
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
