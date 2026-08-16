# include <stdio.h>
int main()
{
 int i=0,j=0,k;
 char s[50];
 printf("Enter string:");
 fgets(s,sizeof(s),stdin);
 int c=0;
 for (int i=0;s[i]!=0;i++)
 {
  c++;
 }
 for (int i=0;i<c;i++)
 {
  k=0;
  for (int j=0;j<c;j++)
  {
   if (s[i]==s[j])
   {
    k++;
   }
  }
  if (k>0)
  {
   printf("First non-repeating:%c",s[i]);
  }
  }
return 0;
}
