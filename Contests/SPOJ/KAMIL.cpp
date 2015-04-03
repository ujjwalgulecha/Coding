#include<stdio.h>
main(){char c;int f=1;while((c=getchar())!=-1){if(c=='\n'){printf("%d\n",f);f=1;}if(c=='F'||c=='L'||c=='D'||c=='T')f*=2;}}
