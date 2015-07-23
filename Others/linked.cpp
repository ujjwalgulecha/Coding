#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,i,start,end;
    string sentence[100],word1,word2;
    cin>>len;
    for(i=0;i<len;i++)
    {
        cin>>sentence[i];
    }
    int min=100;
    cin>>word1>>word2;
    start=end=0;
    for(i=0;i<len;i++)
    {
        if(sentence[i]==word1)
        {
            start=i;
        }
        else if(sentence[i]==word2)
        {
            end=i;
        }
        cout<<end<<" "<<start<<endl;
        if(end-start>0 && end-start<min)
        min=end-start;
    }
    if(min<=0||min==100)cout<<"-1"<<endl;
    else
    cout<<min<<endl;
}
