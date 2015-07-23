<<<<<<< HEAD
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,j=0,t,i,l=0,count,s,w[100],max[100];
    cin>>n;
    while(n--)
    {
        count=0;
        cin>>t;
        for(i=0;i<t;i++)
            cin>>w[i];
        for(i=0;i<t;i++)
            cin>>max[i];
            sort(w,w+t);
            sort(max,max+t);
            for(i=0;i<t;i++)
            {
                for(j=0;j<t;j++)
                {
                    if(w[i]<=max[j])
                    {
                        count++;
                        max[j]=0;
                        break;
                    }
                }
            }
            cout<<count<<endl;
    }
    return 0;
}









=======
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,j=0,t,i,l=0,count,s,w[100],max[100];
    cin>>n;
    while(n--)
    {
        count=0;
        cin>>t;
        for(i=0;i<t;i++)
            cin>>w[i];
        for(i=0;i<t;i++)
            cin>>max[i];
            sort(w,w+t);
            sort(max,max+t);
            for(i=0;i<t;i++)
            {
                for(j=0;j<t;j++)
                {
                    if(w[i]<=max[j])
                    {
                        count++;
                        max[j]=0;
                        break;
                    }
                }
            }
            cout<<count<<endl;
    }
    return 0;
}









>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
