#include<bits/stdc++.h>
using namespace std;
unsigned long long matrix[30][20] = {0};
unsigned long long n = 0;

unsigned long long cValue(int ndivby2, int ndivby3)
{
    int i = 0;
    unsigned long long nresult2 = n >> ndivby2;
    unsigned long long nfinalresult = nresult2;
    for (i = 0; i < ndivby3; i++)
        nfinalresult /= 3;
    return nfinalresult;
}

unsigned long long func(int ndivby2, int ndivby3)
{

    if (matrix[ndivby2][ndivby3] != 0)
        return matrix[ndivby2][ndivby3];
    else {

        unsigned long long k = cValue(ndivby2, ndivby3);
        if (k < 12) return k;

        unsigned long long t = func(ndivby2 + 1, ndivby3) + func(ndivby2, ndivby3 + 1) + func(ndivby2 + 2, ndivby3);

        return matrix[ndivby2][ndivby3] = max(k , t);
    }
}

int main()
{
    int i, j;

    while((cin>>n)!=EOF)
    {for (i = 0; i < 30; i++)for (j = 0; j < 20; j++)matrix[i][j] = 0;
       cout<<func(0,0);
    }
    return 0;
}
