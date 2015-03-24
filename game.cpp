#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
#define gx getchar//_unlocked
#define px putchar//_unlocked
#define ps putchar(' ')
#define pn putchar('\n')
#define MOD 1000000007
//Scanning functions
void scan( int &n ) {   int sign = 1; n = 0;    char c = gx();  while( c < '0' || c > '9' ) {       if( c == '-' ) sign = -1;       c = gx();   }   while( c >= '0' && c <= '9' ) n = (n<<3) + (n<<1) + c - '0', c = gx();  n = n * sign;}
void print( int n ) {   if(n<0) {       n=-n;       px('-');    }   int i=10;   char o[10]; do {        o[--i] = (n%10) + '0'; n/=10;   }while(n);  do {        px(o[i]);   }while(++i<10);}
int main()
{
    int st[101][5001];
    int n,i,j,m,query,q[5001];
    scan(n);
    scan(m);
    scan(query);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scan(st[i][j]);
        }
    }
    int store,min,k;
    while(query--)
    {
        for(i=0;i<n;i++)
            scan(q[i]);
        k=0;
        store=0;
        min=99999;
        int f;
        for(i=0;i<n;i++)
        {
            j=0;
            if(q[k]>=st[i][m-1]){store=m;++k;}
            else
            {
            for(;j<m;)
            {
                if(q[k]>=st[i][j])++j;
                else
                {
                    store=j;
                    k++;
                    break;
                }
            }
            }
            if(j==m){store=m;k++;}
            if(store<min)min=store;
        }
        print(min);
        cout<<endl;
    }
    return 0;
}
