# include <stdio.h>
void function(char a[])
{
 int alpha=0,num=0,spl=0;
 for(int i=0;a[i]!='\0';i++)
 {
  if ((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
  {
   alpha++;
  }
  else if (a[i]>='0' && a[i]<='9')
  {
   num++;
  }
  else if (a[i]!='\n')
  {
   spl++;
  }
 }
 printf("ALPHABETS:%d\n",alpha);
 printf("NUMBERS:%d\n",num);
 printf("SPECIAL:%d\n",spl);
}
int main()
{
 char a[50];
 fgets(a,sizeof(a),stdin);
 function(a);
return 0;
}
