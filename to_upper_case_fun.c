# include <stdio.h>
#include <ctype.h>
void to_upper(char name1[])
{
 int i;
 char NAME1[50];
 for (i=0;name1[i]!='\0';i++)
 {
  NAME1[i]=toupper(name1[i]);
 }
 NAME1[i]='\0';
 printf("%s",NAME1);
}
int main()
{
 char name1[50];
 fgets(name1,sizeof(name1),stdin);
 to_upper(name1);
return 0;
}
