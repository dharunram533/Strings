# include <stdio.h>
int main()
{
 char s[50];
 printf("Enter string:");
 fgets(s, sizeof(s), stdin);
 int c=0,v=0;
 for (int i=0;s[i]!=0;i++)
{
 if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
 {
  v++;
 }
 else if(s[i]>'a'&& s[i]<='z')
{
 c++;
 }
}
 printf("VOWELS:%d\n",v);
 printf("CONSONANT:%d\n",c);
return 0;
}
