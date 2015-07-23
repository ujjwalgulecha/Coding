#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    char plus,eq;
    string num1,num2,res;
    cin>>t;
    int resint,numint;
    int finalans;
    while(t--)
    {
        cin>>num1>>plus>>num2>>eq>>res;
        if(num1.find("machula")!=string::npos)
        {
            numint= atoi(num2.c_str());
            resint= atoi(res.c_str());
            finalans=resint-numint;
            cout<<finalans<<" "<<plus<<" "<<num2<<" "<<eq<<" "<<res<<endl;
        }
        else if(num2.find("machula")!=string::npos)
        {
            numint=atoi(num1.c_str());
            resint= atoi(res.c_str());
            finalans=resint-numint;
            cout<<num1<<" "<<plus<<" "<<finalans<<" "<<eq<<" "<<res<<endl;
        }
        else if(res.find("machula")!=string::npos)
        {
            numint= atoi(num1.c_str());
            resint= atoi(num2.c_str());
            finalans=resint+numint;
            cout<<num1<<" "<<plus<<" "<<num2<<" "<<eq<<" "<<finalans<<endl;
        }
    }

    return 0;
}
