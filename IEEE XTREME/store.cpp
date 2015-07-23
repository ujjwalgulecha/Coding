#include<bits/stdc++.h>
using namespace std;
int main()
{
	int w,h,i,j,u;
	cin>>w>>h;
	int x;
	char ch;
	string str;
	int store[100][100],cumucost[100][100]={0};
	int cost[100][100]={0};
	int final[100][100];
	int s,t;
	for(i=0;i<w;i++)
	{
		for(j=0;j<h;j++)
		{
			cumucost[i][j]=0;
			cost[i][j]=0;
			final[i][j]=1;
			cin>>ch;
			if(ch=='-')
			{
				store[i][j]=0;
			}
			else if(ch=='L')
			{
				store[i][j]=1;
			}
			else if(ch=='M')
			{
				store[i][j]=2;
			}
			else if(ch=='H')
			{
				store[i][j]=3;
			}
			if(j+1<w)
			cin>>ch;

		}

	}
	for(u=0;u<7;u++)
	{

		cin>>str;
		for(i=0;i<w;i++)
		{
			for(j=0;j<h;j++)
			{
				cin>>x;
				cost[i][j]=x;
				if(j+1<w)
				cin>>ch;
			}
		}
	   for(s=0;s<w;s++)
		{
			for(t=0;t<h;t++)
			{
				if(s>=0 && s<w && t-1>=0)
				{
					if(store[s][t-1])
					if((cost[s][t-1]/store[s][t-1])>=5 && (store[s][t-1]==3))cost[s][t]+=1;
				}
				if(s>=0 && s<w && t+1<w)
				{
					if(store[s][t+1])
					if((cost[s][t+1]/store[s][t+1])>=5 && (store[s][t+1]==3))cost[s][t]+=1;
				}
				if(t>=0 && t<h && s+1<h)
				{
					if(store[s+1][t])
					if((cost[s+1][t]/store[s+1][t])>=5 && (store[s+1][t]==3))cost[s][t]+=1;
				}
				if(t>=0 && t<h && s-1>=0)
				{
					if(store[s-1][t])
					if((cost[s-1][t]/store[s-1][t])>=5 && (store[s-1][t]==3))cost[s][t]+=1;
				}
				//cout<<cost[s][t]<<" ";
				if(store[s][t]<3)
				{
					if(final[s][t]){final[s][t]=1;}
					else if((cost[s][t])/(store[s][t]+1)<20)
					final[s][t]=0;
					else final[s][t]=1;
				}

				if(store[s][t]==3)final[s][t]=0;
				if(final[s][t])
				{cumucost[s][t]+=cost[s][t];
					//cout<<str<<" "<<i+1<<" "<<j+1<<" "<<cost[i][j]<<endl;}
			}


		}


	}

	}


	int great=-1;
	int p,q;
	int f=0;

	for(i=0;i<w;i++)
	{
		for(j=0;j<h;j++)
		{

			if(final[i][j])
			{
				f=1;
				if(cumucost[i][j]>great)
				{
					great=cumucost[i][j];
					p=i+1;
					q=j+1;

				}
			}

		}

	}
	if(f==0)cout<<"-1 -1"<<endl;
	else
	cout<<p<<" "<<q<<endl;

	return 0;
}
