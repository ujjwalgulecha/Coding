#include<bits/stdc++.h>
using namespace std;
int fun(int x,int y,int n)
{
    if(n==1)return x;
    if(n==2)return y;
    int a[101],ct,ptr,i,j;

    a[1] = x;
    a[2] = y;
    ct = 2;
    ptr = 1;
    i = 3;
    while(ct<=n)
    {
        for(j=1;j<=2;j++)
        {
            a[i]=(a[ptr]*10)+a[j];
            i++;ct++;
        }
        ptr++;
    }
    for(i=1;i<=n;i++)cout<<a[i]<<endl;
}

int main()
{
    int x,y,n;
    cout<<"Enter the two digits:\n";
    cin>>x>>y;
    cout<<"Enter the number of numbers:\n";
    cin>>n;
    fun(x,y,n);
    return 0;
}
