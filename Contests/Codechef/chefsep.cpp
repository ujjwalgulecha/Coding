<<<<<<< HEAD
#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int n;
    long long int store[100001];
    long long int cost;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>store[i];
    }
    cin>>cost;
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        if(store[i]<0)
        {
            sum+=fabs(store[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(store[i]<0)
        {
            sum2+=cost;
        }
    }

=======
#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int n;
    long long int store[100001];
    long long int cost;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>store[i];
    }
    cin>>cost;
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        if(store[i]<0)
        {
            sum+=fabs(store[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(store[i]<0)
        {
            sum2+=cost;
        }
    }

>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
