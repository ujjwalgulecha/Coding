<<<<<<< HEAD
#include<iostream>
using namespace std;
int check(int n);
int main()
{
    int t,n,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        count=check(n);
        cout<<count<<endl;
    }
    return 0;
}
int check(int n)
{
    int i,j,count=0,d=0;
    for(i=1;;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(d==n)
                return count;
            else
            {
                d++;
                count+=i;
            }
        }
    }
}


=======
#include<iostream>
using namespace std;
int check(int n);
int main()
{
    int t,n,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        count=check(n);
        cout<<count<<endl;
    }
    return 0;
}
int check(int n)
{
    int i,j,count=0,d=0;
    for(i=1;;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(d==n)
                return count;
            else
            {
                d++;
                count+=i;
            }
        }
    }
}


>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
