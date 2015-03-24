#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,k,max,n,m,diff,j,finmin;
    cin>>t;
    while(t--)
    {
        finmin=0;
        cin>>n>>m;
        long long int mouse[n],hole[m];
        for(i=0;i<n;i++)cin>>mouse[i];
        for(i=0;i<m;i++)cin>>hole[i];
        sort(mouse,mouse+n);
        sort(hole,hole+m);
        max=-1;
        finmin=9999999;
        for(j=0;j<=m-n;j++) // HOLE
        {
            max=-1;
            for(i=0;i<n;)// MOUSE
            {

                k=j;
                diff=abs(mouse[i++]-hole[k++]);

                cout<<i<<"  "<<j<<"--"<<diff<<endl;

                if(max<diff)max=diff;
            }
            cout<<max<<endl;
            if(max<finmin)finmin=max;
        }
        cout<<finmin<<endl;
    }
}
