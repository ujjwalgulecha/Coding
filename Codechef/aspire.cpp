<<<<<<< HEAD
/*A string (example "I am writing an email") is entered through the keyboard, write a program in C to get its reverse in a column as output i.e.:
email
an
writing
am
I
-Ujjwal Gulecha
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct ex
{
    char b[1000];
}t[1000];
int main()
{
    int i=0,j;
    char s[1000],a[1000];
    gets(s);
    int z=0;
    while(i<strlen(s))
    {
        memset(a,0,1000);
        j=0;
        while(s[i]!=' ')
        {
            a[j]=s[i];
            j++;
            i++;
        }
        i++;
        a[j]='\0';
        strcpy(t[z].b,a);
        z++;
    }
for(i=z-1;i>=0;i--)
    cout<<t[i].b<<endl;

return 0;
}
=======
/*A string (example "I am writing an email") is entered through the keyboard, write a program in C to get its reverse in a column as output i.e.:
email
an
writing
am
I
-Ujjwal Gulecha
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct ex
{
    char b[1000];
}t[1000];
int main()
{
    int i=0,j;
    char s[1000],a[1000];
    gets(s);
    int z=0;
    while(i<strlen(s))
    {
        memset(a,0,1000);
        j=0;
        while(s[i]!=' ')
        {
            a[j]=s[i];
            j++;
            i++;
        }
        i++;
        a[j]='\0';
        strcpy(t[z].b,a);
        z++;
    }
for(i=z-1;i>=0;i--)
    cout<<t[i].b<<endl;

return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
