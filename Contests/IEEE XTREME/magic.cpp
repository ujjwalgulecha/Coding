#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,i,j,f=0;
    int bad[10000];
    cin>>n;
   int a[1000][1000];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int mainsum=0;
    for(i=0;i<n;i++)mainsum+=a[i][i];
    int k=0;
    int tsum;
    int diag2=0;
   for(i=0;i<n;i++)
   {
        tsum=0;
        for(j=0;j<n;j++)
        {
            if(i+j==n-1) diag2+=a[i][j];
             tsum=tsum+a[j][i];
        }
       // cout<<tsum<<endl;
        if(tsum!=mainsum){f=1;bad[k]=-1*(i+1);k++;}
   }
   if(diag2!=mainsum){f=1;bad[k]=0;k++;}

    for(j=0;j<n;j++)
   {
          tsum=0;
          for(i=0;i<n;i++)
         {
                 tsum=tsum+a[j][i];

         }
          //cout<<tsum<<endl;
         if(tsum!=mainsum){f=1;bad[k]=(j+1);k++;}
    }
    if(f==0)cout<<"0"<<endl;
    else
    {

    sort(bad,bad+k);
    cout<<k<<endl;
    for(i=0;i<k;i++)cout<<bad[i]<<endl;
    }
    return 0;

}
