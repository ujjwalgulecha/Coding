#include<iostream>
using namespace std;
bool isPalindrome(unsigned long long int n)
{
    unsigned long long int m = 0;

    for(unsigned long long int tmp = n; tmp; tmp >>= 1)
    	m = (m << 1) | (tmp & 1);

    return m == n;
}
int main()
{
    unsigned long long int a,b,i,ct=0;
    char com;
    cin>>a>>com>>b;
	for(i=a;i<=b;i++)
        if(isPalindrome(i))ct++;
        cout<<ct<<endl;
	return 0;
}
