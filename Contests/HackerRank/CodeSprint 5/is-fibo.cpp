<<<<<<< HEAD
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdint.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,i,f;
    long long n;
    long long a[49]={0ll,1ll,2ll,3ll,5ll,8ll,13ll,21ll,34ll,55ll,89ll,144ll,233ll,377ll,610ll,987ll,1597ll,2584ll,4181ll,6765ll,10946ll,17711ll,28657ll,46368ll,75025ll,121393ll,196418ll,317811ll,514229ll,832040ll,1346269ll,2178309ll, 3524578ll,5702887ll,9227465ll,14930352ll, 24157817ll,39088169ll, 63245986ll,102334155ll,165580141ll,267914296ll,433494437ll, 701408733ll,1134903170ll,1836311903ll,2971215073ll,4807526976ll, 7778742049ll};
    cin>>t;
    while(t--)
    {
        f=1;
        //cout<<a[42]<<endl;
        cin>>n;
        for(i=0;i<49;i++)
            {if(n==a[i]){f=0;cout<<"IsFibo\n";break;}}
        if(f)cout<<"IsNotFibo\n";
    }
    return 0;
}
=======
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdint.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,i,f;
    long long n;
    long long a[49]={0ll,1ll,2ll,3ll,5ll,8ll,13ll,21ll,34ll,55ll,89ll,144ll,233ll,377ll,610ll,987ll,1597ll,2584ll,4181ll,6765ll,10946ll,17711ll,28657ll,46368ll,75025ll,121393ll,196418ll,317811ll,514229ll,832040ll,1346269ll,2178309ll, 3524578ll,5702887ll,9227465ll,14930352ll, 24157817ll,39088169ll, 63245986ll,102334155ll,165580141ll,267914296ll,433494437ll, 701408733ll,1134903170ll,1836311903ll,2971215073ll,4807526976ll, 7778742049ll};
    cin>>t;
    while(t--)
    {
        f=1;
        //cout<<a[42]<<endl;
        cin>>n;
        for(i=0;i<49;i++)
            {if(n==a[i]){f=0;cout<<"IsFibo\n";break;}}
        if(f)cout<<"IsNotFibo\n";
    }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
