<<<<<<< HEAD
/*program to add very large numbers! upto 10000 digits long too!
-Ujjwal Gulecha
*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a[10000],b[10000],c[10000];
    for(int k=0;k<10000;k++){a[k]=b[k]=c[k]=0;}
    int max,great,temp,len1,len2;
    char str1[10000],str2[10000];
    cin>>str1;
    cin>>str2;
    len1=strlen(str1);
    len2=strlen(str2);
    int i,j;
    for(i=0;i<len1;i++)
        a[i]=(int)str1[len1-1-i]-48;

   for(i=len2-1;i>=0;i--)
        b[i]=(int)str2[len2-1-i]-48;

    max=len1>len2?len1:len2;
    great=max;
    for(i=0;i<max;i++)
    {
        c[i]+=a[i]+b[i];
        if(i==max-1&&c[i]>9)
        {
            temp=c[i];
            c[i]=c[i]%10;
            c[i+1]+=(temp/10);
            great=max+1;
        }
        if(c[i]>9)
        {
            temp=c[i];
            c[i]=c[i]%10;
            c[i+1]+=(temp/10);
        }
    }
  for(i=great-1;i>=0;i--)
        cout<<c[i];
       cout<<endl;
    return 0;
}
=======
/*program to add very large numbers! upto 10000 digits long too!
-Ujjwal Gulecha
*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a[10000],b[10000],c[10000];
    for(int k=0;k<10000;k++){a[k]=b[k]=c[k]=0;}
    int max,great,temp,len1,len2;
    char str1[10000],str2[10000];
    cin>>str1;
    cin>>str2;
    len1=strlen(str1);
    len2=strlen(str2);
    int i,j;
    for(i=0;i<len1;i++)
        a[i]=(int)str1[len1-1-i]-48;

   for(i=len2-1;i>=0;i--)
        b[i]=(int)str2[len2-1-i]-48;

    max=len1>len2?len1:len2;
    great=max;
    for(i=0;i<max;i++)
    {
        c[i]+=a[i]+b[i];
        if(i==max-1&&c[i]>9)
        {
            temp=c[i];
            c[i]=c[i]%10;
            c[i+1]+=(temp/10);
            great=max+1;
        }
        if(c[i]>9)
        {
            temp=c[i];
            c[i]=c[i]%10;
            c[i+1]+=(temp/10);
        }
    }
  for(i=great-1;i>=0;i--)
        cout<<c[i];
       cout<<endl;
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
