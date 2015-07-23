#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,k,max,n,m,diff,j,finmin;
    cin>>t;
    while(t--)
    {
        finmin=999999999;
        cin>>n>>m;
        long long int mouse[n],hole[m];
        for(i=0;i<n;i++)cin>>mouse[i];
        for(i=0;i<m;i++)cin>>hole[i];
        sort(mouse,mouse+n);
        sort(hole,hole+m);
        max=-1;
        for(j=0;j<=m-n;j++) // HOLE
        {
            max=-1;
            k=j;
            for(i=0;i<n;)// MOUSE
            {

                diff=abs(mouse[i]-hole[k]);
                i++;
                k++;

                //cout<<i-1<<"  "<<k-1<<"--"<<diff<<endl;

                if(max<diff)max=diff;
            }
            //cout<<max<<endl;
            if(max<finmin)finmin=max;
        }
        cout<<finmin<<endl;
    }
}
