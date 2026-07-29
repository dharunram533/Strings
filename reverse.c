# include <stdio.h>
int main()
{
 char name[50];
 printf("Enter string:");
 fgets(name,sizeof(name),stdin);
 int c=0;
 for (int i=0;name[i]!='\0';i++)
 {
 c++;
 }
 for (int i=c-1;i>=0;i--)
 {
  printf("%c",name[i]);
 }
return 0;
}
