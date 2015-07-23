<<<<<<< HEAD
/*http://ipsc.ksp.sk/contests/ipsc2011/real/problems/a.html
-Ujjwal Gulecha
*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j;
    enum abc {scissors,paper,rock,lizard,Spock};
    int fd[5]={0};
    char s[20];
    int t;
    cin>>t;
    char ch;
    int ct=0;
    while(t--)
    {
        if(ct%2==0)for(i=0;i<5;i++)fd[i]=0;
        ct++;
        cin>>s;
        ch=s[0];
        switch(ch)
        {
            case 's': if (fd[Spock]==0){cout<<"Spock\n";fd[Spock]=1;}
                        else{cout<<"rock\n";fd[rock]=1;}break;
            case 'p':if (fd[scissors]==0){cout<<"scissors\n";fd[scissors]=1;}
                        else{cout<<"lizard\n";fd[lizard]=1;}break;

            case 'r':if (fd[paper]==0){cout<<"paper\n";fd[paper]=1;}
                        else{cout<<"lizard\n";fd[lizard]=1;}break;

            case 'l':if (fd[rock]==0){cout<<"rock\n";fd[rock]=1;}
                        else{cout<<"scissors\n";fd[scissors]=1;}break;

            case 'S':if (fd[paper]==0){cout<<"paper\n";fd[paper]=1;}
                        else{cout<<"lizard\n";fd[lizard]=1;}break;
        }
    }
    return 0;
}
=======
/*http://ipsc.ksp.sk/contests/ipsc2011/real/problems/a.html
-Ujjwal Gulecha
*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j;
    enum abc {scissors,paper,rock,lizard,Spock};
    int fd[5]={0};
    char s[20];
    int t;
    cin>>t;
    char ch;
    int ct=0;
    while(t--)
    {
        if(ct%2==0)for(i=0;i<5;i++)fd[i]=0;
        ct++;
        cin>>s;
        ch=s[0];
        switch(ch)
        {
            case 's': if (fd[Spock]==0){cout<<"Spock\n";fd[Spock]=1;}
                        else{cout<<"rock\n";fd[rock]=1;}break;
            case 'p':if (fd[scissors]==0){cout<<"scissors\n";fd[scissors]=1;}
                        else{cout<<"lizard\n";fd[lizard]=1;}break;

            case 'r':if (fd[paper]==0){cout<<"paper\n";fd[paper]=1;}
                        else{cout<<"lizard\n";fd[lizard]=1;}break;

            case 'l':if (fd[rock]==0){cout<<"rock\n";fd[rock]=1;}
                        else{cout<<"scissors\n";fd[scissors]=1;}break;

            case 'S':if (fd[paper]==0){cout<<"paper\n";fd[paper]=1;}
                        else{cout<<"lizard\n";fd[lizard]=1;}break;
        }
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
