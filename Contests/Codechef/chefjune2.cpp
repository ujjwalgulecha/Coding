<<<<<<< HEAD
#include<stdio.h>

int main()
{
    int t,x;
    double p,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&p);
        if (p > 0.5000)
        {
            x = 10000;
        }
        else
            x = 0;
        ans = 10000*p*(1-p)*2 + 10000*(1-p) + x*(2*p-1);
        printf("%lf\n",ans);
    }
    return 0;
}
=======
#include<stdio.h>

int main()
{
    int t,x;
    double p,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&p);
        if (p > 0.5000)
        {
            x = 10000;
        }
        else
            x = 0;
        ans = 10000*p*(1-p)*2 + 10000*(1-p) + x*(2*p-1);
        printf("%lf\n",ans);
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
