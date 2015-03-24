<<<<<<< HEAD
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x[100000],b,z,count;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
        cin>>x[i];
        for(int i=0;i<n;i++)
        {
            count=0;
            z=1;
            for(;;)
            {
                b=x[i]/pow(5,z);
                if(pow(5,z)>x[i])
                break;
                count+=b;
                z++;
            }
            cout<<count<<endl;
        }
    return 0;
}
=======
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x[100000],b,z,count;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
        cin>>x[i];
        for(int i=0;i<n;i++)
        {
            count=0;
            z=1;
            for(;;)
            {
                b=x[i]/pow(5,z);
                if(pow(5,z)>x[i])
                break;
                count+=b;
                z++;
            }
            cout<<count<<endl;
        }
    return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
