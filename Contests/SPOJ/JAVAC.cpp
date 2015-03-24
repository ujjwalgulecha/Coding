<<<<<<< HEAD
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void convertToC(char str[101]);
void convertToJava(char str[101]);
int main()
{
    int i,err;
    char str[101];
    int capital,under;
    while (scanf("%s", str) == 1)
    {
        err=0;
        capital=0;
        under=0;
        if(str[0]=='_'){err=1;cout<<"Error!\n";continue;}
        if(str[strlen(str)-1]=='_'){cout<<"Error!\n";continue;}
        if(strlen(str)==1&&isupper(str[0])){cout<<"Error!\n";continue;}
        if(strlen(str)==1){cout<<str<<endl;continue;}
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]=='_'&&str[i+1]=='_'&&(i+1<strlen(str))){err=1;cout<<"Error!\n";break;}
            if(str[i]=='_')under=1;
            if(isupper(str[i]))capital=1;
        }
        if(!err)
        {
        if(capital&&under)
            cout<<"Error!\n";
        else if(capital)
        {
            convertToC(str);
        }
      else if(under||(!under&&!capital))
        {
           convertToJava(str);
        }
        }
    }
    return 0;
}
void convertToC(char str[101])
{
    int i;
    char temp[500];
    if(isupper(str[0])){cout<<"Error!\n";return;}
    int j=0;
    for(i=0;i<strlen(str);)
    {
        if(isupper(str[i]))
        {
            temp[j]='_';
            j++;
            temp[j]=tolower(str[i]);
            j++;
            i++;
        }
        else
           {
               temp[j]=str[i];
               j++;
               i++;
           }
    }
    temp[j]='\0';
    cout<<temp<<endl;
    return;
}
void convertToJava(char str[101])
{
    int i;
    char temp[500];
    int j=0;
    for(i=0;i<strlen(str);)
    {
        if(str[i]=='_')
        {
            i++;
            temp[j]=toupper(str[i]);
            j++;
            i++;
        }
        else
           {
               temp[j]=str[i];
               j++;
               i++;
           }
    }
    temp[j]='\0';
    cout<<temp<<endl;
    return;
}

=======
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void convertToC(char str[101]);
void convertToJava(char str[101]);
int main()
{
    int i,err;
    char str[101];
    int capital,under;
    while (scanf("%s", str) == 1)
    {
        err=0;
        capital=0;
        under=0;
        if(str[0]=='_'){err=1;cout<<"Error!\n";continue;}
        if(str[strlen(str)-1]=='_'){cout<<"Error!\n";continue;}
        if(strlen(str)==1&&isupper(str[0])){cout<<"Error!\n";continue;}
        if(strlen(str)==1){cout<<str<<endl;continue;}
        for(i=0;i<strlen(str);i++)
        {
            if(str[i]=='_'&&str[i+1]=='_'&&(i+1<strlen(str))){err=1;cout<<"Error!\n";break;}
            if(str[i]=='_')under=1;
            if(isupper(str[i]))capital=1;
        }
        if(!err)
        {
        if(capital&&under)
            cout<<"Error!\n";
        else if(capital)
        {
            convertToC(str);
        }
      else if(under||(!under&&!capital))
        {
           convertToJava(str);
        }
        }
    }
    return 0;
}
void convertToC(char str[101])
{
    int i;
    char temp[500];
    if(isupper(str[0])){cout<<"Error!\n";return;}
    int j=0;
    for(i=0;i<strlen(str);)
    {
        if(isupper(str[i]))
        {
            temp[j]='_';
            j++;
            temp[j]=tolower(str[i]);
            j++;
            i++;
        }
        else
           {
               temp[j]=str[i];
               j++;
               i++;
           }
    }
    temp[j]='\0';
    cout<<temp<<endl;
    return;
}
void convertToJava(char str[101])
{
    int i;
    char temp[500];
    int j=0;
    for(i=0;i<strlen(str);)
    {
        if(str[i]=='_')
        {
            i++;
            temp[j]=toupper(str[i]);
            j++;
            i++;
        }
        else
           {
               temp[j]=str[i];
               j++;
               i++;
           }
    }
    temp[j]='\0';
    cout<<temp<<endl;
    return;
}

>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
