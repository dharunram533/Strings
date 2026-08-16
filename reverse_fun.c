# include <stdio.h>
void reverse(char s[])
{
 int c=0;
 for (int i=0;s[i]!='\0';i++)
 {
 c++;
 }
 for (int i=c;i>=0;i--)
 {
  printf("%c",s[i]);
 }
}
int main()
{
 char s[50];
 fgets(s,sizeof(s),stdin);
 reverse(s);
return 0;
}
