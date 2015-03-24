<<<<<<< HEAD
#include<stdio.h>
#include<iostream>
using namespace std;
#define INF 9999999
void floydWarshell (int graph[200][200],int n);
void floydWarshell (int graph[200][200],int n)
{
    int dist[200][200], i, j, k,a,q,b;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            dist[i][j] = graph[i][j];

    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    cin>>q;
        while(q--)
        {
            cin>>a>>b;
            if(a==b)cout<<"0\n";
            else
            cout<<dist[a][b]<<endl;
        }
}
int main()
{
    int t,n,q,i,j;
    char c;
    int graph[200][200];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>c;
                if(c=='Y')graph[i][j]=1;
                else graph[i][j]=INF;
            }
        }
        floydWarshell(graph,n);
    }
    return 0;
}
=======
#include<stdio.h>
#include<iostream>
using namespace std;
#define INF 9999999
void floydWarshell (int graph[200][200],int n);
void floydWarshell (int graph[200][200],int n)
{
    int dist[200][200], i, j, k,a,q,b;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            dist[i][j] = graph[i][j];

    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    cin>>q;
        while(q--)
        {
            cin>>a>>b;
            if(a==b)cout<<"0\n";
            else
            cout<<dist[a][b]<<endl;
        }
}
int main()
{
    int t,n,q,i,j;
    char c;
    int graph[200][200];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>c;
                if(c=='Y')graph[i][j]=1;
                else graph[i][j]=INF;
            }
        }
        floydWarshell(graph,n);
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
