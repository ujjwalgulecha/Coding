<<<<<<< HEAD
/*
A. Group of Students
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
At the beginning of the school year Berland State University starts two city school programming groups, for beginners and for intermediate coders. The children were tested in order to sort them into groups. According to the results, each student got some score from 1 to m points. We know that c1 schoolchildren got 1 point, c2 children got 2 points, ..., cm children got m points. Now you need to set the passing rate k (integer from 1 to m): all schoolchildren who got less than k points go to the beginner group and those who get at strictly least k points go to the intermediate group. We know that if the size of a group is more than y, then the university won't find a room for them. We also know that if a group has less than x schoolchildren, then it is too small and there's no point in having classes with it. So, you need to split all schoolchildren into two groups so that the size of each group was from x to y, inclusive.

Help the university pick the passing rate in a way that meets these requirements.

Input
The first line contains integer m (2 ≤ m ≤ 100). The second line contains m integers c1, c2, ..., cm, separated by single spaces (0 ≤ ci ≤ 100). The third line contains two space-separated integers x and y (1 ≤ x ≤ y ≤ 10000). At least one ci is greater than 0.

Output
If it is impossible to pick a passing rate in a way that makes the size of each resulting groups at least x and at most y, print 0. Otherwise, print an integer from 1 to m — the passing rate you'd like to suggest. If there are multiple possible answers, print any of them.
-Ujjwal Gulecha
*/
#include<iostream>
using namespace std;
int main()
{
    long long int t,sum,n,i,flag,a[101],x,y,diff;
        flag=0;
        diff=0;
        cin>>n;
        sum=0;
        for(i=1;i<=n;i++)
        {
                cin>>a[i];
                sum+=a[i];
        }
        cin>>x>>y;
        for(i=n;i>=1;i--)
        {
            sum-=a[i];
            diff+=a[i];
            if(sum>=x&&sum<=y&&diff>=x&&diff<=y)
            {
                cout<<i<<endl;
                flag=1;
                 break;
            }
        }
        if(flag==0)cout<<"0\n";
    return 0;
}
=======
/*
A. Group of Students
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
At the beginning of the school year Berland State University starts two city school programming groups, for beginners and for intermediate coders. The children were tested in order to sort them into groups. According to the results, each student got some score from 1 to m points. We know that c1 schoolchildren got 1 point, c2 children got 2 points, ..., cm children got m points. Now you need to set the passing rate k (integer from 1 to m): all schoolchildren who got less than k points go to the beginner group and those who get at strictly least k points go to the intermediate group. We know that if the size of a group is more than y, then the university won't find a room for them. We also know that if a group has less than x schoolchildren, then it is too small and there's no point in having classes with it. So, you need to split all schoolchildren into two groups so that the size of each group was from x to y, inclusive.

Help the university pick the passing rate in a way that meets these requirements.

Input
The first line contains integer m (2 ≤ m ≤ 100). The second line contains m integers c1, c2, ..., cm, separated by single spaces (0 ≤ ci ≤ 100). The third line contains two space-separated integers x and y (1 ≤ x ≤ y ≤ 10000). At least one ci is greater than 0.

Output
If it is impossible to pick a passing rate in a way that makes the size of each resulting groups at least x and at most y, print 0. Otherwise, print an integer from 1 to m — the passing rate you'd like to suggest. If there are multiple possible answers, print any of them.
-Ujjwal Gulecha
*/
#include<iostream>
using namespace std;
int main()
{
    long long int t,sum,n,i,flag,a[101],x,y,diff;
        flag=0;
        diff=0;
        cin>>n;
        sum=0;
        for(i=1;i<=n;i++)
        {
                cin>>a[i];
                sum+=a[i];
        }
        cin>>x>>y;
        for(i=n;i>=1;i--)
        {
            sum-=a[i];
            diff+=a[i];
            if(sum>=x&&sum<=y&&diff>=x&&diff<=y)
            {
                cout<<i<<endl;
                flag=1;
                 break;
            }
        }
        if(flag==0)cout<<"0\n";
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
