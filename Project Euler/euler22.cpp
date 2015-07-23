<<<<<<< HEAD
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
class problem
{
    int x[50],count,sum2;
public:
    problem(){count=0;sum2=0;}
    void display()
    {
        cout<<"sum="<<sum2;
    }
    void read()
    {
        int sum;
        char s[30];
        ifstream infile;
        infile.open("words.txt");
        while (infile>>s)
            {
                count++;
                sum=0;
                for(int i=0;s[i]!='\0';i++)
                sum=sum+((int)s[i]-64);
                sum=count*sum;
                sum2+=sum;
            }
    }
};

int main()
{
    problem b;
    b.read();
    b.display();
    return 0;
}
=======
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
class problem
{
    int x[50],count,sum2;
public:
    problem(){count=0;sum2=0;}
    void display()
    {
        cout<<"sum="<<sum2;
    }
    void read()
    {
        int sum;
        char s[30];
        ifstream infile;
        infile.open("words.txt");
        while (infile>>s)
            {
                count++;
                sum=0;
                for(int i=0;s[i]!='\0';i++)
                sum=sum+((int)s[i]-64);
                sum=count*sum;
                sum2+=sum;
            }
    }
};

int main()
{
    problem b;
    b.read();
    b.display();
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
