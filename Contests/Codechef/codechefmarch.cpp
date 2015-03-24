<<<<<<< HEAD
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct Q
{
    char data[100];
}q[100];
void process(struct Q q[100],char small[26],char big[26],int n);
int main()
{
    int n,i,j;
    char name[26],small[26],big[26];
    cin>>n;
    scanf("%s",name);
    for(i=0;i<26;i++)
       {
           small[i]=name[i];
           big[i]=toupper(name[i]);
       }
   for(i=0;i<n;i++)
        scanf("%s",q[i].data);
        process(q,small,big,n);
system("pause");
    return 0;
}
void process(struct Q q[100],char small[26],char big[26],int n)
{
    int x;
    for(int j=0;j<n;j++)
    {
    for(int i=0;q[j].data[i]!='\0';i++)
    {
        if(q[j].data[i]=='_')
            {
                cout<<" ";
                continue;
            }
        if(isalpha(q[j].data[i]))
        {
            x=q[j].data[i];
            if(x>96&&x<123)
            {
                cout<<small[x-97];
            }
            else
                cout<<big[x-65];
        }
        else
        cout<<q[j].data[i];
    }
    cout<<endl;
    }
return;
}
=======
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct Q
{
    char data[100];
}q[100];
void process(struct Q q[100],char small[26],char big[26],int n);
int main()
{
    int n,i,j;
    char name[26],small[26],big[26];
    cin>>n;
    scanf("%s",name);
    for(i=0;i<26;i++)
       {
           small[i]=name[i];
           big[i]=toupper(name[i]);
       }
   for(i=0;i<n;i++)
        scanf("%s",q[i].data);
        process(q,small,big,n);
system("pause");
    return 0;
}
void process(struct Q q[100],char small[26],char big[26],int n)
{
    int x;
    for(int j=0;j<n;j++)
    {
    for(int i=0;q[j].data[i]!='\0';i++)
    {
        if(q[j].data[i]=='_')
            {
                cout<<" ";
                continue;
            }
        if(isalpha(q[j].data[i]))
        {
            x=q[j].data[i];
            if(x>96&&x<123)
            {
                cout<<small[x-97];
            }
            else
                cout<<big[x-65];
        }
        else
        cout<<q[j].data[i];
    }
    cout<<endl;
    }
return;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
