<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
long long int count(long long int S[],long long int m,long long int n )
{
    // table[i] will be storing the number of solutions for
    // value i. We need n+1 rows as the table is consturcted
    // in bottom up manner using the base case (n = 0)
    long long int table[n+1];

    // Initialize all table values as 0
    memset(table, 0, sizeof(table));

    // Base case (If given value is 0)
    table[0] = 1;

    // Pick all coins one by one and update the table[] values
    // after the index greater than or equal to the value of the
    // picked coin
    for(int i=0; i<m; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];

    return table[n];
}
int main()
{
     long long int j,i,t,n,k,arr[25],flag,ans,store[25]={1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393};
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n>>k;
        j=0;
        for(i=0;i<25;i++)
        {
            if(store[i]==k)continue;
            arr[j]=store[i];
            j++;
        }
        ans=(count(arr,24,n)%1000000007);
        printf("%lld\n",ans);
    }
        return 0;
}

=======
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
long long int count(long long int S[],long long int m,long long int n )
{
    // table[i] will be storing the number of solutions for
    // value i. We need n+1 rows as the table is consturcted
    // in bottom up manner using the base case (n = 0)
    long long int table[n+1];

    // Initialize all table values as 0
    memset(table, 0, sizeof(table));

    // Base case (If given value is 0)
    table[0] = 1;

    // Pick all coins one by one and update the table[] values
    // after the index greater than or equal to the value of the
    // picked coin
    for(int i=0; i<m; i++)
        for(int j=S[i]; j<=n; j++)
            table[j] += table[j-S[i]];

    return table[n];
}
int main()
{
     long long int j,i,t,n,k,arr[25],flag,ans,store[25]={1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393};
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n>>k;
        j=0;
        for(i=0;i<25;i++)
        {
            if(store[i]==k)continue;
            arr[j]=store[i];
            j++;
        }
        ans=(count(arr,24,n)%1000000007);
        printf("%lld\n",ans);
    }
        return 0;
}

>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
