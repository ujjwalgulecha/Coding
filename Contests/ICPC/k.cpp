<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
int check1[104],n,m,t,i,num,count=0,a[104],b[104],check2[104],min1,min2;
using namespace std;
int a_b()
{ int count=0,i;
  for(i=1;i<=n;i++)if(check1[a[i]]==1 && check2[a[i]]==0)++count;
  return count;
}

int b_a()
{ int count=0,i;
  for(i=1;i<=m;i++)if(check2[b[i]]==1 && check1[b[i]]==0)++count;
  return count;
}

int main()
{
  scanf("%d",&t);
  while(t--)
   { for(i=1;i<101;i++){check1[i]=check2[i]=0;}
     scanf("%d",&n);
     for(i=1;i<=n;i++)
       { scanf("%d",&a[i]);
            check1[a[i]]=1;
       }
     scanf("%d",&m);
     for(i=1;i<=m;i++)
       { scanf("%d",&b[i]);
            check2[b[i]]=1;
       }
      min1=a_b();
      min2=b_a();
      int diff=n-m;
      if(diff<0)diff*=-1;
      if(min1<=min2){ min1+=diff; printf("%d",min1); }
      else{min2+=diff; printf("%d",min2);}
      if(t!=0)cout<<endl;
   }
  return 0;
}
=======
#include<iostream>
#include<stdio.h>
int check1[104],n,m,t,i,num,count=0,a[104],b[104],check2[104],min1,min2;
using namespace std;
int a_b()
{ int count=0,i;
  for(i=1;i<=n;i++)if(check1[a[i]]==1 && check2[a[i]]==0)++count;
  return count;
}

int b_a()
{ int count=0,i;
  for(i=1;i<=m;i++)if(check2[b[i]]==1 && check1[b[i]]==0)++count;
  return count;
}

int main()
{
  scanf("%d",&t);
  while(t--)
   { for(i=1;i<101;i++){check1[i]=check2[i]=0;}
     scanf("%d",&n);
     for(i=1;i<=n;i++)
       { scanf("%d",&a[i]);
            check1[a[i]]=1;
       }
     scanf("%d",&m);
     for(i=1;i<=m;i++)
       { scanf("%d",&b[i]);
            check2[b[i]]=1;
       }
      min1=a_b();
      min2=b_a();
      int diff=n-m;
      if(diff<0)diff*=-1;
      if(min1<=min2){ min1+=diff; printf("%d",min1); }
      else{min2+=diff; printf("%d",min2);}
      if(t!=0)cout<<endl;
   }
  return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
