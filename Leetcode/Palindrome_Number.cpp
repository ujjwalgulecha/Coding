class Solution {
public:
    bool isPalindrome(int x) {

        if(x==0)return 1;

        if(x<0)return 0;

        int num=0,r=x;

        while(x)
        {
            num=(x%10)+num*10;
            x/=10;
        }
        if(num==r)return 1;
        else return 0;

    }
};
