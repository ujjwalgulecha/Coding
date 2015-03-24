<<<<<<< HEAD
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int col,flag;
    int i,j,k;
    char a[400],temp[400][400];
    while(1)
    {
        cin>>col;
        if(col==0)break;
        else
        {
            flag=0;
            cin>>a;
            i=0;
            for(k=0;k<strlen(a);)
            {
                if(flag==0)
                {
                for(j=0;j<col;j++)
                {
                    temp[i][j]=a[k];
                    k++;
                    flag=1;
                }
                }
                else if(flag==1)
                {
                     for(j=col-1;j>=0;j--)
                        {temp[i][j]=a[k];
                        k++;
                        flag=0;
                        }
                }
                i++;
            }
            for(i=0;i<col;i++)
            {
                for(j=0;j<strlen(a)/col;j++)
                {
                    cout<<temp[j][i];
                }
            }

            cout<<endl;
        }
    }
    return 0;

        }

=======
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int col,flag;
    int i,j,k;
    char a[400],temp[400][400];
    while(1)
    {
        cin>>col;
        if(col==0)break;
        else
        {
            flag=0;
            cin>>a;
            i=0;
            for(k=0;k<strlen(a);)
            {
                if(flag==0)
                {
                for(j=0;j<col;j++)
                {
                    temp[i][j]=a[k];
                    k++;
                    flag=1;
                }
                }
                else if(flag==1)
                {
                     for(j=col-1;j>=0;j--)
                        {temp[i][j]=a[k];
                        k++;
                        flag=0;
                        }
                }
                i++;
            }
            for(i=0;i<col;i++)
            {
                for(j=0;j<strlen(a)/col;j++)
                {
                    cout<<temp[j][i];
                }
            }

            cout<<endl;
        }
    }
    return 0;

        }

>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
