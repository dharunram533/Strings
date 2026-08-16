# include <stdio.h>
void compare(char name1[],char name2[])
{
 int i,flag=1;
 for (int i=0;name1[i]!='\0' || name2[i]!='\0';i++)
 {
  if (name1[i]!=name2[i])
  {
   flag=0;
   break;
  }
 }
 if(flag)
 {
  printf("Strings are equal");
 }
 else{
  printf("Strings are not equal");
 }
 
}
int main()
{
 char name1[50];
 char name2[50];
 fgets(name1,sizeof(name1),stdin);
 fgets(name2,sizeof(name2),stdin);
 compare(name1,name2);
return 0;
}
