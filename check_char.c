# include <stdio.h>
void check(char name[],int c)
{
 int flag=0;
 char check;
 printf("Enter string to check:");
 scanf("%c",&check);
 for (int i=0;name[i]!='\0';i++)
 {
  if(name[i]==check)
  {
   flag=1;
  }
 }
 if (flag)
 {
  printf("Character exists");
 }
 else{
  printf("Character does not exists");
 }
}
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
 check(name,c);
return 0;
}
