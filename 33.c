#include <stdio.h>
int main(void) 
{
char s[10000];
int count=0;
printf("Enter a line : \n");
gets(s);
for(int i=0;s[i]!='\0';i++)
{
    if(s[i]==' ')
    count++;
}
printf("The spaces in that line is %d",count);
return 0;
}
