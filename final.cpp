#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
typedef  long long int ull;

int main() {
    string str,a, b;
    cin>>str;
    vector<ull> vect;
    ull i, res, new_num, num, count = 0;
    ull x =0 ;
    ull y = 0;
    getline(cin,str );
    stringstream ss(str);
    while (ss >> i)
    {
        vect.push_back(i);

        if (ss.peek() == ',')
            ss.ignore();
    }
    x = vect[0];
    y = vect[1];

    //scanf("%ll,%ll", &x,&y );
    //cout<<x<<" "<<y<<endl;
        for(i = x; i <= y; i++)
        {
        res = 0;
        num = i;
	//cout<<num<<endl;
        new_num = 0;
        while(num)
            {
            res = (num & 1);
            new_num = (new_num << 1) | res;
            num = num >> 1;
        	}
	//cout<<new_num<<" "<<i<<endl;
        if(new_num == i)
	{
            count = count + 1;
		cout<<new_num<<",";
    	}
}
    //cout<<count<<endl;
    return 0;
}
