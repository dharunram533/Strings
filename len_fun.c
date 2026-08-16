# include <stdio.h>
void display(char name[])
{
 int c=0;
 for (int i=0;name[i]!='\0';i++)
 {
   if (name[i] != ' ' && name[i] != '\n')
        {
            c++;
        }
 }
 printf("%d",c);
}
int main()
{
 char name[50];
 printf("Enter name:");
 fgets(name,sizeof(name),stdin);
 display(name);
return 0;
}
