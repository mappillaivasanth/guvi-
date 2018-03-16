#include <stdio.h>

int main(void) 
{
char s[10000];
int count=0,i;
printf("Enter a sentence:");
gets(s);
for(i=0;s[i]!='\0';i++)
    {
        count++;
    }
for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
         count--;
    }
printf("The number of characters in the sentence is %d",count);
return 0;
}
