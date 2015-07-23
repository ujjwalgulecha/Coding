#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,a[101],t,ran,r[10][10];
	for(i=1;i<=25;i++)a[i]=i;

	for(i=1;i<=25;i++)
	{
		t=a[i];
		ran=rand()%25;
		++ran;
		a[i]=a[ran];
		a[ran]=t;
	}
	int k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			r[i][j]=a[k];
			k++;
		}
	}
		for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
		cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
