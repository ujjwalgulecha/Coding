#include<bits/stdc++.h>
using namespace std;
int main()
{
    double *store;
    int n;
    int a,b,i;
    char c;
    int halves=0;
    int quarter=0;
    int threequarter=0;
    cin>>n;
    int ct=0;
    store = new double[n+1];
    for(i=0;i<n;i++)
    {
        int f=0;
        cin>>a>>c>>b;
        store[i]=(double)a/b;
        double temp = 1.0 - store[i];
        if(store[i]==0.5 &&halves>0){f=1;halves--;}
        else if(store[i]==0.75 && threequarter>0){f=1;threequarter--;}
        else if(store[i]==0.25 && quarter>0){f=1;quarter--;}
        if(f==0)
        {
        if(temp==0.5)halves++;
        else if(temp==0.25)quarter++;
        else if(temp==0.75)threequarter++;

        ct++;
        }

    }
    ct++;
    cout<<ct<<endl;
   return 0;
}

