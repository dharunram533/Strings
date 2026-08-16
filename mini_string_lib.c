# include <stdio.h>
void length(char str1[])
{
 int c=0;
 for (int i=0;str1[i]!='\0';i++)
 {
  c++;
 }
 printf("Length :%d\n",c);
}
void copy(char str1[])
{
 char copy[50];
 for (int i=0;str1[i]!='\0';i++)
 {
  copy[j]=str[i];
  j++;
 }
 printf("Copied:");
 printf("%s",copy);
}
void compare(char str1[],char str2[])
{
 int flag=0;
 for (int i=0;str1[i]!=0 && str2[i]!=0;i++)
 {
  if(str1[i]==str2[i])
  {
   flag=1;
  }
 }
 if(flag){
 printf("Strings are same");
 }
 else{
 printf("Strings are not same");
 }
}
void concat(char str1[],char str2[])
{
 int i = length(str1);
 int j = 0;
 while (str2[j] != '\0')
 {
   str1[i] = str2[j];
   i++;
   j++;
 }
   str1[i] = '\0';
 printf("%s",str1);
}

void reverse(char str1[])
{
    int i = 0;
    int j = length(str1) - 1;

    while (i < j)
    {
        char temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;

        i++;
        j--;
    }
    printf("%s",str1);
}

void toUpper(char str1[])
{
    for (int i = 0; str1[i] != '\0'; i++)
    {
     if (str1[i] >= 'a' && str1[i] <= 'z')
    str1[i] = str1[i] - 32;
  }
}

void toLower(char str1[])
{
  for (int i = 0; str1[i] != '\0'; i++)
  {
    if (str1[i] >= 'A' && str1[i] <= 'Z')
    str1[i] = str1[i] + 32;
  }
}
int palindrome(char str1[])
{
    int i = 0;
    int j = length(str1) - 1;
    int flag=0;
    while (i < j)
    {
        if (str1[i] != str1[j])
        flag=1;
        i++;
        j--;
    }
    if(flag){
   printf("Character found");
  }

}

int searchCharacter(char str1[])
{
  char ch;
  scanf("%c",&ch);
  int flag=0;
  for (int i = 0; str1[i] != '\0'; i++)
    {
      if (str[i] == ch)
      flag=1;
   }
  if(flag){
   printf("Character found");
  }
}
int main()
{
 char str1[50];
 printf("Enter first string:");
 fgets(str1,sizeof(str1),stdin);
 char str2[50];
 printf("Enter second string:");
 fgets(str2,sizeof(str2),stdin);
 do{
  int choice;
  printf("Enter choice:");
  scanf("%d",&choice);
  printf("1.Length\n"
         "2.Copy\n"
         "3.Compare\n"
         "4.Concat\n"
         "5.upper\n"
         "6.Lower\n"
         "7.palindrome\n"
         "8.Character check\n");
  switch(choice)
  {
   case 1:
   length(str1);
   break;
   case 2:
   copy(str1);
   break;
   case 3:
   compare(str1,str2);
   break;
   case 4:
   concat(str1,str2);
   break;
   case 5:
   upper(str1);
   break;
   case 6:
   lower(str1);
   break;
   case 7:
   palindrome(str1);
   break;
   case 8:
   character_check(str1);
   break;
   default:
   printf("Thank you");
   break;
  }
  while(choice!=8);
