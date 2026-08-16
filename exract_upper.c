# include <stdio.h>
void function(char name[],int c)
{
 for (int i=0;i<c;i++)
 {
  if(name[i]>='A' && name[i]<='Z')
  {
   printf("%c",name[i]);
  }
 }
}
int main()
{
 char name[50];
 printf("Enter name:");
 fgets(name,sizeof(name),stdin);
 int c=0;
 for (int i=0;name[i]!='\0';i++)
 {
  c++;
 }
 function(name,c);
return 0;
}
