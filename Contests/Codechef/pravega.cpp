<<<<<<< HEAD
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int check(int i);
using namespace std;
int digit[10]={0,0,1,0,1,0,1,0,1,0};
int main()
{
    int i,a[100000];
    int k=0,flag,x;
    for(i=1;i<=1000;i++)
    {
        flag=0;
        x=i;
        while(x)
        {
            if(digit[x%10]==0){flag=1;break;}
            x/=10;
        }
        if(flag)continue;
        else
        {
            if(check(i)){cout<<i<<endl;}
        }
    }
}
int check(int p)
{
    int flag,ct,z,k;
    char ss[10000],ss1[10000],str1[10000];
    string str;
  sprintf(str1,"%d",p);
  ct=strlen(str1);
  for(int z=0;z<ct;z++)
    str[z]=str1[z];
    str[z]='\0';
  for (int i = 0; i < ct; i++)
    {
        for (int j = 0; j < ct - i; j++)
        {
                flag=0;
                string ss = str.substr(i, i + j + 1);
                for(k=0;k<ss.length();k++)
                    ss1[k]=ss[k];
                    ss1[k]='\0';
                    z=atoi(ss1);
                    if(z%2==0&&z%11!=0&&z!=0)continue;
                    else{flag=1;break;}
               }
  }
  if(flag)return 0;
  else return 1;

}
=======
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int check(int i);
using namespace std;
int digit[10]={0,0,1,0,1,0,1,0,1,0};
int main()
{
    int i,a[100000];
    int k=0,flag,x;
    for(i=1;i<=1000;i++)
    {
        flag=0;
        x=i;
        while(x)
        {
            if(digit[x%10]==0){flag=1;break;}
            x/=10;
        }
        if(flag)continue;
        else
        {
            if(check(i)){cout<<i<<endl;}
        }
    }
}
int check(int p)
{
    int flag,ct,z,k;
    char ss[10000],ss1[10000],str1[10000];
    string str;
  sprintf(str1,"%d",p);
  ct=strlen(str1);
  for(int z=0;z<ct;z++)
    str[z]=str1[z];
    str[z]='\0';
  for (int i = 0; i < ct; i++)
    {
        for (int j = 0; j < ct - i; j++)
        {
                flag=0;
                string ss = str.substr(i, i + j + 1);
                for(k=0;k<ss.length();k++)
                    ss1[k]=ss[k];
                    ss1[k]='\0';
                    z=atoi(ss1);
                    if(z%2==0&&z%11!=0&&z!=0)continue;
                    else{flag=1;break;}
               }
  }
  if(flag)return 0;
  else return 1;

}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
