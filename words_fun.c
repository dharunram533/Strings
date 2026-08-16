# include <stdio.h>
void words(char name[])
{
 int c=1;
 for (int i=0;name[i]!='\0';i++)
 {
  if (name[i]==' ')
  {
   c++;
  }
 }
 printf("Total words:%d",c);
}
int main()
{
 char name[50];
 fgets(name,sizeof(name),stdin);
 words(name);
 return 0;
}
