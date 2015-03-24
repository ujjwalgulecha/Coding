#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,len1,len2,i,ct;
    char broken[26];
    char word[101];
    cin>>t;
    while(t--)
    {
        ct=0;
        int broke[26]={0};
        cin>>broken;
        len1=strlen(broken);
        for(i=0;i<len1;i++)broke[broken[i]-97]++;
        cin>>word;
        len2=strlen(word);
        for(i=0;i<len2;i++){if(broke[word[i]-97])ct++;broke[word[i]-97]=0;}
        cout<<ct<<endl;
    }
    return 0;
}
