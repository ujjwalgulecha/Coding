<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
	int ct=0,i,p,t;
  	ct=0;
  	char chr[20], x[5]={'"','?','?','?','\0'},c='"';
  	char z='" "';
  	char ujj='-';
  	char aku='\'';
  	scanf("%d",&t);
  	string str;
  	t+=1;
  	p=t-1;
  	while(t--)
    {
        ct=0;
        getline(cin, str);
        i=0;
      	while(i<str.length())
        {
            if (isspace(str[i])){printf(" ");i++;ct++;continue;}
            if(ct>0 && isspace(str[i-1]) && i-1==0 && str[i]=='?' && str[i+1]=='?' && str[i+2]=='?'&&(i+2)<str.length())
			{
                printf("It's");
                i+=3;
                continue;
            }
            if(ct>0 && isspace(str[i-1]) && str[i-2]=='.' && i-2>=0 && str[i]=='?' && str[i+1]=='?' && str[i+2]=='?'&&(i+2)<str.length())
			{
                printf("It's");
                i+=3;
                continue;
            }
			if(ct==0&&str[i]=='?'&&str[i+1]=='?'&&str[i+2]=='?'&&i<str.length())
            {
                printf("It's");
                i+=3;
                continue;
            }

			if(ct>0&&str[i]=='?'&&str[i+1]=='?'&&str[i+2]=='?'&&(i+2<str.length()))
            {
                printf("Its");
                i+=3;
                continue;
            }

            if((str[i]==c||str[i]==ujj||str[i]==aku)&&str[i+1]=='?'&&str[i+2]=='?'&&str[i+3]=='?'&&(i+3<str.length()))
               {
                   cout<<c;
                   printf("It's");
                   i+=4;
                    continue;
                }

			printf("%c",str[i]);
			i++;
        }
        if(p!=t&&t!=0)cout<<endl;
    }
}
=======
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
	int ct=0,i,p,t;
  	ct=0;
  	char chr[20], x[5]={'"','?','?','?','\0'},c='"';
  	char z='" "';
  	char ujj='-';
  	char aku='\'';
  	scanf("%d",&t);
  	string str;
  	t+=1;
  	p=t-1;
  	while(t--)
    {
        ct=0;
        getline(cin, str);
        i=0;
      	while(i<str.length())
        {
            if (isspace(str[i])){printf(" ");i++;ct++;continue;}
            if(ct>0 && isspace(str[i-1]) && i-1==0 && str[i]=='?' && str[i+1]=='?' && str[i+2]=='?'&&(i+2)<str.length())
			{
                printf("It's");
                i+=3;
                continue;
            }
            if(ct>0 && isspace(str[i-1]) && str[i-2]=='.' && i-2>=0 && str[i]=='?' && str[i+1]=='?' && str[i+2]=='?'&&(i+2)<str.length())
			{
                printf("It's");
                i+=3;
                continue;
            }
			if(ct==0&&str[i]=='?'&&str[i+1]=='?'&&str[i+2]=='?'&&i<str.length())
            {
                printf("It's");
                i+=3;
                continue;
            }

			if(ct>0&&str[i]=='?'&&str[i+1]=='?'&&str[i+2]=='?'&&(i+2<str.length()))
            {
                printf("Its");
                i+=3;
                continue;
            }

            if((str[i]==c||str[i]==ujj||str[i]==aku)&&str[i+1]=='?'&&str[i+2]=='?'&&str[i+3]=='?'&&(i+3<str.length()))
               {
                   cout<<c;
                   printf("It's");
                   i+=4;
                    continue;
                }

			printf("%c",str[i]);
			i++;
        }
        if(p!=t&&t!=0)cout<<endl;
    }
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
