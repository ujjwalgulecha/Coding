<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,row,col,ct,i,j;
    char s[51][51];
    cin>>t;
    while(t--)
    {
        ct=0;
        cin>>row>>col;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin>>s[i][j];
            }
        }
        for(i=2;i<row;i++)
        {
            for(j=2;j<col;j++)
            {
                if(s[i][j]=='#')continue;
                else
                {
                    if(s[i-1][j]=='^'&&s[i-2][j]=='^'&&s[i][j-1]=='^'&&s[i][j-2]=='^')
                    {
                        if(i+1<row&&i+2<row&&j+1<col&&j+2<col)
                        {
                            if(s[i+1][j]=='^'&&s[i+2][j]=='^'&&s[i][j+1]=='^'&&s[i][j+2]=='^')
                                ct++;
                        }
                    }
                }
            }
        }

        cout<<ct<<endl;
    }
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,row,col,ct,i,j;
    char s[51][51];
    cin>>t;
    while(t--)
    {
        ct=0;
        cin>>row>>col;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin>>s[i][j];
            }
        }
        for(i=2;i<row;i++)
        {
            for(j=2;j<col;j++)
            {
                if(s[i][j]=='#')continue;
                else
                {
                    if(s[i-1][j]=='^'&&s[i-2][j]=='^'&&s[i][j-1]=='^'&&s[i][j-2]=='^')
                    {
                        if(i+1<row&&i+2<row&&j+1<col&&j+2<col)
                        {
                            if(s[i+1][j]=='^'&&s[i+2][j]=='^'&&s[i][j+1]=='^'&&s[i][j+2]=='^')
                                ct++;
                        }
                    }
                }
            }
        }

        cout<<ct<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
