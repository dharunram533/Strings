# include <stdio.h>
void concat(char name1[],char name2[])
{
 int i,j;
 for (int i=0;name1[i]!='\0';i++)
 {
  if (name1[i]=='\n')
  {
   name1[i]=' ';
  }
 }
 for (int j=0;name2[j]!='\0';j++)
 {
 if (name2[j]!='\n'){
  name1[++i]=name2[j];
 }
 }
 printf("Full name:%s",name1);
}
int main()
{
 char name1[50],name2[50];
 fgets(name1,sizeof(name1),stdin);
 fgets(name2,sizeof(name2),stdin);
 concat(name1,name2);
return 0;
}
