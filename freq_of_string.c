# include <stdio.h>
int main()
{
 int i=0,j=0,k=0;
 char s[50];
 printf("Enter string:");
 fgets(s,sizeof(s),stdin);
 char ch;
 printf("Enter target to search:");
 scanf("%c",&ch);
 int c=0;
 for (int i=0;s[i]!=0;i++)
 {
  c++;
 }
 if (s[i]=='\n')
 {
  c--;
 }
 for (int i=0;i<c;i++)
 {
 if (s[i]==ch)
 {
  k++;
 }
 }
 if (k>0)
 {
  printf("%c:%d ",ch,k);
 }
else
 {
  printf("Invalid");
 }

 
return 0;
}
