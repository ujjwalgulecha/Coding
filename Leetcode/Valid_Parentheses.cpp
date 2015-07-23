class Solution {
public:
    bool isValid(string s) {

        string stack;
        int top=-1,len,i;
        len = s.length();
        if(len==1)return 0;
        for(i=0;i<len;i++)
        {
            if(s[i]=='(')stack[++top]='(';
            else if(s[i]=='{')stack[++top]='{';
            else if(s[i]=='[')stack[++top]='[';

            else if(s[i]==')'&&stack[top]=='(')top--;
            else if(s[i]=='}'&&stack[top]=='{')top--;
            else if(s[i]==']'&&stack[top]=='[')top--;
            else {return 0;}
        }
        if(top==-1)return 1;
        else return 0;


    }
};
