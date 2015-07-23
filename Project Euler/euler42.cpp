<<<<<<< HEAD
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
class problem
{
    int x[50],count;
public:
    problem(){count=0;}
    void allocate()
    {
        for (int i=1;i<=20;i++)
            x[i]=((i+1)*i)/2;
    }
    void display()
    {
        cout<<"count="<<count;
    }
    void read()
    {
        char s[20];
        ifstream infile;
        infile.open("words.txt");
        while (infile>>s)
            {
                int sum=0;
                for(int i=0;s[i]!='\0';i++)
                sum=sum+((int)s[i]-64);
                check(sum);
            }
    }
    void check(int z)
    {
        for(int i=1;i<=20;i++)
        {
            if(z==x[i])
            {
                count++;
                return;
            }
        }
        return;
    }
};
int main()
{
    problem b;
    b.allocate();
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
    int x[50],count;
public:
    problem(){count=0;}
    void allocate()
    {
        for (int i=1;i<=20;i++)
            x[i]=((i+1)*i)/2;
    }
    void display()
    {
        cout<<"count="<<count;
    }
    void read()
    {
        char s[20];
        ifstream infile;
        infile.open("words.txt");
        while (infile>>s)
            {
                int sum=0;
                for(int i=0;s[i]!='\0';i++)
                sum=sum+((int)s[i]-64);
                check(sum);
            }
    }
    void check(int z)
    {
        for(int i=1;i<=20;i++)
        {
            if(z==x[i])
            {
                count++;
                return;
            }
        }
        return;
    }
};
int main()
{
    problem b;
    b.allocate();
    b.read();
    b.display();
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
