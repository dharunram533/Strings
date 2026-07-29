# include <stdio.h>
int main()
{
 int i,j=0;
 int flag=0;
 char s[50];
 printf("Enter string:");
 fgets(s,sizeof(s),stdin);
 int c=0;
 for (int i=0;s[i]!='\0';i++)
 {
 c++;
 }
 if (s[c-1]=='\n'){
 c--;
}
 char rev[50];
 printf("%d",c);
 for (int i=c-1;i>=0;i--)
 {
  rev[j]=s[i];
  j++;
 }
for (int i=0;i<c;i++)
 {
 if (rev[i]==s[i])
 {
 flag=1;
 }
 }
 if (flag){
 printf("Palindrome");
 }
 else{
 printf("Not palindrome");
}

return 0;
}
