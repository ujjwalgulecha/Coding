<<<<<<< HEAD
#include<iostream>
#include<string.h>
#define B continue;
#define C cout<<
using namespace std;int main(){char s[1001];int t,t1,p;cin>>t1;long long int b;while(t1--){cin>>s>>b;if(!b){C"1\n";B}t=((int)s[strlen(s)-1])-48;if(!t)C"0\n";p=b%4;if(t==1){C"1\n";B}if(t==2){p++;if(p==2)C"2";if(p==3)cout<<"4";if(p==4)C"8";if(p==1)C"6";C"\n";B}if(t==3){p++;if(p==2)C"3";if(p==3)C"9";if(p==4)C"7";if(p==1)C"1";C"\n";B}if(t==4){p=b%2;if(!p)C"6\n";else C"4\n";B}if(t==5){C"5\n";B}if(t==6){C"6\n";B}if(t==7){p++;if(p==2)C"7";if(p==3)C"9";if(p==4)C"3";if(p==1)C"1";C"\n";B}if(t==8){p++;if(p==2)C"8";if(p==3)C"4";if(p==4)C"2";if(p==1)C"6";C"\n";B}if(t==9){p=b%2;if(!p)C"1\n";else C"9\n";B}}return 0;}
=======
#include<iostream>
#include<string.h>
#define B continue;
#define C cout<<
using namespace std;int main(){char s[1001];int t,t1,p;cin>>t1;long long int b;while(t1--){cin>>s>>b;if(!b){C"1\n";B}t=((int)s[strlen(s)-1])-48;if(!t)C"0\n";p=b%4;if(t==1){C"1\n";B}if(t==2){p++;if(p==2)C"2";if(p==3)cout<<"4";if(p==4)C"8";if(p==1)C"6";C"\n";B}if(t==3){p++;if(p==2)C"3";if(p==3)C"9";if(p==4)C"7";if(p==1)C"1";C"\n";B}if(t==4){p=b%2;if(!p)C"6\n";else C"4\n";B}if(t==5){C"5\n";B}if(t==6){C"6\n";B}if(t==7){p++;if(p==2)C"7";if(p==3)C"9";if(p==4)C"3";if(p==1)C"1";C"\n";B}if(t==8){p++;if(p==2)C"8";if(p==3)C"4";if(p==4)C"2";if(p==1)C"6";C"\n";B}if(t==9){p=b%2;if(!p)C"1\n";else C"9\n";B}}return 0;}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
