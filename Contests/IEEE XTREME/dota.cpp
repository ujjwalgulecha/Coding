#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m;
    cin>>n>>m;
    char stri[100],typi[100],k,temp[100],temp2[100],temp3[100],temp4[100];
    int a,b;
    int p;
    string typ,str;
    map<string,int>cost;
    map<string,string>type;
    for(p=0;p<n;p++)
    {
        cin>>stri;
        for(i=0;stri[i]!=',';i++)temp[i]=stri[i];temp[i]='\0';++i;
        for(k=0;stri[i]!=',';i++,k++)temp2[k]=stri[i];i++;temp2[k]='\0';
        for(k=0;stri[i]!=':';i++,k++)temp3[k]=stri[i];++i;temp3[k]='\0';a=atoi(temp3);
        for(k=0;i<strlen(stri);i++,k++)temp4[k]=stri[i];temp4[k]='\0';b=atoi(temp4);
        str=temp;
        typ=temp2;
        type[str]=typ;
        int t=(((a*100)/(a+b)))*(p+1);

        cost[str]=t;
        //cout<<str<<" "<<type[str]<<" "<<cost[str]<<endl;
    }


for( map<string,string>::iterator ii=type.begin(), map<string,int>::iterator j=cost.begin();ii!=type.end(),jj!=cost.end() ;++ii,++jj)

  {

      cout << (*ii).first << ": " << (*ii).second <<" "<<(*jj).secod<<endl;

  }

return 0;
}
