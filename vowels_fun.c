# include <stdio.h>
void vowels(char a[])
{
 int count=0;
 for (int i=0;a[i]!='\0';i++)
 {
  if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' ||a[i]=='a' ||a[i]=='e' || a[i] =='i' 
     || a[i]=='o' ||a[i]=='u')
  {
   count++;
  }
 }
 printf("Total vowels:%d",count);
}
int main()
{
 char a[50];
 fgets(a,sizeof(a),stdin);
 vowels(a);
return 0;
}
