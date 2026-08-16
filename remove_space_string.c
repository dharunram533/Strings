# include <stdio.h>
int main()
{
 int i;
 char s[50];
 printf("Enter string:");
 fgets(s,sizeof(s),stdin);
 int c=0;
 for (int i=0;s[i]!='\0';i++)
 {
  if (s[i]!=' ')
  {
   printf("%c",s[i]);

  }
}
return 0;
}
