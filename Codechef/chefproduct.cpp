<<<<<<< HEAD
/*The fight between Raghu and Rannvijay is becoming more intense.This time Rannvijay asked Raghu a question.
He gives him a number N and asked him to find the number of all pairs (a, b) of positive integers such that
1 <= a < b <= N and the sum a + b divides the product a * b.
Since you are in Raghu's Team ,help him to calculate the answer.
by-Ujjwal Gulecha
*/

#include<iostream>
using namespace std;
int main()
{
    int n,t,i,j,ct;
    cin>>t;
    while(t--)
    {
        ct=0;
        cin>>n;
        for(i=1;i<=n;i++)
            {
                for(j=i+1;j<=n;j++)
                {
                    if((i*j)%(i+j)==0)ct++;
                }
            }
        cout<<ct<<endl;
    }
    return 0;
}
=======
/*The fight between Raghu and Rannvijay is becoming more intense.This time Rannvijay asked Raghu a question.
He gives him a number N and asked him to find the number of all pairs (a, b) of positive integers such that
1 <= a < b <= N and the sum a + b divides the product a * b.
Since you are in Raghu's Team ,help him to calculate the answer.
by-Ujjwal Gulecha
*/

#include<iostream>
using namespace std;
int main()
{
    int n,t,i,j,ct;
    cin>>t;
    while(t--)
    {
        ct=0;
        cin>>n;
        for(i=1;i<=n;i++)
            {
                for(j=i+1;j<=n;j++)
                {
                    if((i*j)%(i+j)==0)ct++;
                }
            }
        cout<<ct<<endl;
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
