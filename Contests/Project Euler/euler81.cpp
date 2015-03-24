<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a[80][80];
    int s,i=0,j=0;
    ifstream infile;
        infile.open("matrix.txt");
        while (infile>>s)
            {
                a[i][j]=s;
                if(j==79)
                i++;
                j++;
            }
            for (i=0;i<80;i++)
            {
                for(j=0;j<80;j++)
               {
                    cout<<a[i][j]<<" ";
               }
               cout<<endl;
            }
            int sum;
            sum=a[0][0];
            for(int i=1;i<)



}







=======
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a[80][80];
    int s,i=0,j=0;
    ifstream infile;
        infile.open("matrix.txt");
        while (infile>>s)
            {
                a[i][j]=s;
                if(j==79)
                i++;
                j++;
            }
            for (i=0;i<80;i++)
            {
                for(j=0;j<80;j++)
               {
                    cout<<a[i][j]<<" ";
               }
               cout<<endl;
            }
            int sum;
            sum=a[0][0];
            for(int i=1;i<)



}







>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
