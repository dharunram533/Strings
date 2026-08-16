# include <stdio.h>
int main()
{
 char original[100];
 char word[10];
 printf("Enter string:");
 fgets(original,sizeof(original),stdin);
 int c=0;
 for (int i=0;original[i]!=0;i++)
 {
 c++;
 }
 for (int i=0;i<c;i++)
 {
   if (original[i]=='\0')
 
{
   if(original[i]=='t' && original[i+1]=='h' && original[i+2]=='e')
   {
    i=i+4;
   }
   }
 printf("%c",original[i]);

 }

return 0;
}
   
