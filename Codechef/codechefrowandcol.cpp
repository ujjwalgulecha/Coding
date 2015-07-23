<<<<<<< HEAD
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int row[314159],col[314159];
    char s[10];
    int n,q,great;
    cin>>n>>q;
    int i,j,x,y;
    for(i=0;i<n;i++)
    {
        row[i]=0;
        col[i]=0;
    }
  /* for(i=0;i<q;i++)
    {
        cin>>s;
        cin>>x;
        cin>>y;
        if(s[0]=='R')
                row[x-1]+=y;
        else
                col[x-1]+=y;
    }
    sort(row,row+n);
    sort(col,col+n);
    great=row[n-1]+col[n-1];
        cout<<great<<endl;
        */
    return 0;
}



=======
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int row[314159],col[314159];
    char s[10];
    int n,q,great;
    cin>>n>>q;
    int i,j,x,y;
    for(i=0;i<n;i++)
    {
        row[i]=0;
        col[i]=0;
    }
  /* for(i=0;i<q;i++)
    {
        cin>>s;
        cin>>x;
        cin>>y;
        if(s[0]=='R')
                row[x-1]+=y;
        else
                col[x-1]+=y;
    }
    sort(row,row+n);
    sort(col,col+n);
    great=row[n-1]+col[n-1];
        cout<<great<<endl;
        */
    return 0;
}



>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
