#include<stdio.h>
int main()
{
char str[100];
int i,c=0;
printf("Enter a string:");
gets(str);
for(i=0;str[i]!='\0';i++)
  {
  if((str[i]>=33&&str[i]<=47)||(str[i]>=58&&str[i]<=64))
   c++;
  }
printf("The number of special characters in the string is %d",c);  
return 0;
}
