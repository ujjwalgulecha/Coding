<<<<<<< HEAD
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,great,c,g[100000],j,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        great=0;
        if(n==1){
                scanf("%d",&g[0]);printf("UNFIT\n");
        continue;}
        for(i=0;i<n;i++)
            scanf("%d",&g[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
            c=g[j]-g[i];
            if (c>great)
                {great=c;}
            }
        }
        if(great==0)printf("UNFIT\n");
        else printf("%d\n",great);
    }
    return 0;
}


=======
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,great,c,g[100000],j,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        great=0;
        if(n==1){
                scanf("%d",&g[0]);printf("UNFIT\n");
        continue;}
        for(i=0;i<n;i++)
            scanf("%d",&g[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
            c=g[j]-g[i];
            if (c>great)
                {great=c;}
            }
        }
        if(great==0)printf("UNFIT\n");
        else printf("%d\n",great);
    }
    return 0;
}


>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
