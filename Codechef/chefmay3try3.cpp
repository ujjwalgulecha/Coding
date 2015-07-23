<<<<<<< HEAD
#include <iostream>
#include <stdio.h>
#include<algorithm>
using namespace std;
int main()
{
        int n,q,i,j,s;
            cin>>n;
        double b[100000],c[100000],max1,max2,min1,sum;
        for(i=0;i<n;i++)
       scanf("%lf",&b[i]);
        cin>>q;
        for(i=0;i<q;i++)
        {
            for(s=0;s<n;s++)
                c[s]=b[s];
                sum=0.0;
                int l,r;
                max1=max2=0;
                min1=99999999.9;
                cin>>l>>r;
                sort(c+l,c+r+1);
                min1=c[l];
                max1=c[r];
                for(j=0;j<n;j++)
                {
                        if(j>=l && j<=r)
                        {
                            continue;
                        }
                        else
                        {
                                if(b[j]>max2)
                                        max2=b[j];
                        }
                }
                if(((max1-min1)/2.0)>max2)
                        {
                        sum=min1+(max1-min1)/2.0;
                        printf("%.1lf\n",sum);
                        }
                else
                {
                sum=max2+min1;
                         printf("%.1lf\n",sum);
                }
        }
        return 0;
}
=======
#include <iostream>
#include <stdio.h>
#include<algorithm>
using namespace std;
int main()
{
        int n,q,i,j,s;
            cin>>n;
        double b[100000],c[100000],max1,max2,min1,sum;
        for(i=0;i<n;i++)
       scanf("%lf",&b[i]);
        cin>>q;
        for(i=0;i<q;i++)
        {
            for(s=0;s<n;s++)
                c[s]=b[s];
                sum=0.0;
                int l,r;
                max1=max2=0;
                min1=99999999.9;
                cin>>l>>r;
                sort(c+l,c+r+1);
                min1=c[l];
                max1=c[r];
                for(j=0;j<n;j++)
                {
                        if(j>=l && j<=r)
                        {
                            continue;
                        }
                        else
                        {
                                if(b[j]>max2)
                                        max2=b[j];
                        }
                }
                if(((max1-min1)/2.0)>max2)
                        {
                        sum=min1+(max1-min1)/2.0;
                        printf("%.1lf\n",sum);
                        }
                else
                {
                sum=max2+min1;
                         printf("%.1lf\n",sum);
                }
        }
        return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
