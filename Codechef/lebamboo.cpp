<<<<<<< HEAD
#include<iostream>
using namespace std;
bool check(int a[51],int b[51],int n,int x);
int main()
{
    int t,a[51],min,diff,index,flag,n,j,i,b[51];
    cin>>t;
    while(t--)
    {
        flag=1;
        min=999999;
        cin>>n;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)cin>>b[i];
              if(n==1)
        {
            if(a[0]<b[0]){cout<<"-1\n";continue;}
        }
         if(check(a,b,n,0)){cout<<0<<endl;continue;}

        for(j=0;j<500;j++)
        {
            min=999999;
            for(i=0;i<n;i++)
            {
                diff=b[i]-a[i];
                if(diff<min){min=diff;index=i;}
            }
          //  cout<<min<<endl;
            for(i=0;i<n;i++)
            {
                if(i==index)a[i]--;
                else
                a[i]++;
            }

    /*   for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
*/

        //if(check(a,b,n,-1)){cout<<"-1\n";flag=0;break;}
       if(check(a,b,n,0)){cout<<j+1<<endl;flag=0;break;}
        }
        if(flag==1)cout<<"-1\n";
    }
    return 0;
}
bool check(int a[51],int b[51],int n,int x)
{
for (int i = 0; i < n ; i++)
    {
        if (b[i]-a[i]!= x )
            return false;
    }
    return true;
}
=======
#include<iostream>
using namespace std;
bool check(int a[51],int b[51],int n,int x);
int main()
{
    int t,a[51],min,diff,index,flag,n,j,i,b[51];
    cin>>t;
    while(t--)
    {
        flag=1;
        min=999999;
        cin>>n;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)cin>>b[i];
              if(n==1)
        {
            if(a[0]<b[0]){cout<<"-1\n";continue;}
        }
         if(check(a,b,n,0)){cout<<0<<endl;continue;}

        for(j=0;j<500;j++)
        {
            min=999999;
            for(i=0;i<n;i++)
            {
                diff=b[i]-a[i];
                if(diff<min){min=diff;index=i;}
            }
          //  cout<<min<<endl;
            for(i=0;i<n;i++)
            {
                if(i==index)a[i]--;
                else
                a[i]++;
            }

    /*   for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
*/

        //if(check(a,b,n,-1)){cout<<"-1\n";flag=0;break;}
       if(check(a,b,n,0)){cout<<j+1<<endl;flag=0;break;}
        }
        if(flag==1)cout<<"-1\n";
    }
    return 0;
}
bool check(int a[51],int b[51],int n,int x)
{
for (int i = 0; i < n ; i++)
    {
        if (b[i]-a[i]!= x )
            return false;
    }
    return true;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
