int romanToInt(char* s) {

    int i,res=0,len = strlen(s);
    for(i=0;i<len;)
    {
        if(s[i]=='I'&&i+1<len&&(s[i+1]=='V'||s[i+1]=='X'))
        {
            res+=(s[i+1]=='X'?9:4);i+=2;
        }
        else if(s[i]=='X'&&i+1<len&&(s[i+1]=='L'||s[i+1]=='C'))
        {
            res+=(s[i+1]=='C'?90:40);i+=2;
        }
        else if(s[i]=='C'&&i+1<len&&(s[i+1]=='D'||s[i+1]=='M'))
        {
            res+=(s[i+1]=='M'?900:400);i+=2;
        }
        else
        {
            if(s[i]=='I')res+=1;
            else if(s[i]=='V')res+=5;
            else if(s[i]=='X')res+=10;
            else if(s[i]=='L')res+=50;
            else if(s[i]=='C')res+=100;
            else if(s[i]=='D')res+=500;
            else res+=1000;
            ++i;
        }
    }
    return res;
}
