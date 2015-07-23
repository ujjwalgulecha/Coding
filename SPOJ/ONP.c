<<<<<<< HEAD
#define SIZE 401
#include <ctype.h>
#include<stdio.h>
char s[SIZE];
int top = -1; /* Global declarations */

push(char elem) { /* Function for PUSH operation */
 s[++top] = elem;
}

char pop() { /* Function for POP operation */
 return (s[top--]);
}

int pr(char elem) { /* Function for precedence */
 switch (elem) {
 case '#':
  return 0;
 case '(':
  return 1;
 case '+':
 case '-':
  return 2;
 case '*':
 case '/':
  return 3;
 }
}

main() { /* Main Program */
 char infx[401], pofx[401], ch, elem;
 int i = 0, k = 0;
 int n;
 scanf("%d",&n);
 while(n--)
 {
     i=0,k=0;
      scanf("%s", infx);
      push('#');
 while ((ch = infx[i++]) != '\0') {
  if (ch == '(')
   push(ch);
  else if (isalnum(ch))
   pofx[k++] = ch;
  else if (ch == ')') {
   while (s[top] != '(')
    pofx[k++] = pop();
   elem = pop(); /* Remove ( */
  } else { /* Operator */
   while (pr(s[top]) >= pr(ch))
    pofx[k++] = pop();
   push(ch);
  }
 }
 while (s[top] != '#') /* Pop from stack till empty */
  pofx[k++] = pop();
 pofx[k] = '\0'; /* Make pofx as valid string */
  printf("%s\n",pofx);
 }

 return 0;
}
=======
#define SIZE 401
#include <ctype.h>
#include<stdio.h>
char s[SIZE];
int top = -1; /* Global declarations */

push(char elem) { /* Function for PUSH operation */
 s[++top] = elem;
}

char pop() { /* Function for POP operation */
 return (s[top--]);
}

int pr(char elem) { /* Function for precedence */
 switch (elem) {
 case '#':
  return 0;
 case '(':
  return 1;
 case '+':
 case '-':
  return 2;
 case '*':
 case '/':
  return 3;
 }
}

main() { /* Main Program */
 char infx[401], pofx[401], ch, elem;
 int i = 0, k = 0;
 int n;
 scanf("%d",&n);
 while(n--)
 {
     i=0,k=0;
      scanf("%s", infx);
      push('#');
 while ((ch = infx[i++]) != '\0') {
  if (ch == '(')
   push(ch);
  else if (isalnum(ch))
   pofx[k++] = ch;
  else if (ch == ')') {
   while (s[top] != '(')
    pofx[k++] = pop();
   elem = pop(); /* Remove ( */
  } else { /* Operator */
   while (pr(s[top]) >= pr(ch))
    pofx[k++] = pop();
   push(ch);
  }
 }
 while (s[top] != '#') /* Pop from stack till empty */
  pofx[k++] = pop();
 pofx[k] = '\0'; /* Make pofx as valid string */
  printf("%s\n",pofx);
 }

 return 0;
}
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
