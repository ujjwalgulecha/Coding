<<<<<<< HEAD
#include<stdio.h>
#include<string.h>
main()
{
    char a[10],b[10];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        strcpy(b,a);
        strrev(a);
        if(!(strcmp(a,b)))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
=======
#include<stdio.h>
#include<string.h>
main()
{
    char a[10],b[10];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        strcpy(b,a);
        strrev(a);
        if(!(strcmp(a,b)))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
