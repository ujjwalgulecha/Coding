<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int t,i,a[8000],n,maxSum,currentSum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        maxSum=a[0];
        currentSum=0;
      for(int i=0;i<n;i++)
    {
        currentSum+=a[i];
        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        else if(currentSum < 0)
        {
            currentSum= 0;
        }
    }
    cout<<maxSum<<endl;
    }
    return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
    int t,i,a[8000],n,maxSum,currentSum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        maxSum=a[0];
        currentSum=0;
      for(int i=0;i<n;i++)
    {
        currentSum+=a[i];
        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        else if(currentSum < 0)
        {
            currentSum= 0;
        }
    }
    cout<<maxSum<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
