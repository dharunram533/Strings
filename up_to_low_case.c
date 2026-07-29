# include <stdio.h>
#include <ctype.h>
int main()
{
 char s[50];
 printf("Enter string:");
 fgets(s,sizeof(s),stdin);
 int c=0;
 for (int i=0;s[i]!=0;i++)
 {
  c++;
 }
 if (s[c-1]=='\n')
 {
  c--;
 }
 for (int i=0;i<c;i++)
 {
  s[i]=tolower(s[i]);
 }
 printf("Lowercase:%s\n",s);
return 0;
}

