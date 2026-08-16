# include <stdio.h>
# include <string.h>
int main()
{
 int i=0;
 char search[50],replace[50];
 char ch[50];
 printf("Enter the searching word:");
 scanf("%s",search);
 printf("Enter the replacing word:");
 scanf("%s",replace);
 FILE *fp=fopen("one.txt","r");
 FILE *fp1=fopen("replace.txt","w");
 while((fscanf(fp,"%s",ch))!=EOF)
 {
  if(strcmp(ch,search)==0)
  {
   fprintf(fp1,"%s",replace);
  }
  else
  {
   fprintf(fp1,"%s",ch);
  }
 }
 fclose(fp);
 fclose(fp1);
 printf("Sucessfully replaced.");
return 0;
}
