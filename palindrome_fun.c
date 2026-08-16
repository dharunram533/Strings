# include <stdio.h>
void reverse(char s[])
{
 char check[50];
 int c=0,j=0,flag=0;
 for (int i=0;s[i]!='\0';i++)
 {
 c++;
 }
 for (int i=c;i>=0;i--)
 {
  check[j]=s[i];
  j++;
 }
 for (int i=0;i<c;i++)
 {
  if (check[i]==s[i])
  {
   flag=1;
  }
 }
 if(flag)
 {
   printf("Palindrome");
 }
 else{
   printf("Not palindrome");
 }
}
int main()
{
 char s[50];
 fgets(s,sizeof(s),stdin);
 reverse(s);
return 0;
}
