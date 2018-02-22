#include<stdio.h>
#include<conio.h>
void main()
{
 long int a,b,c;
printf("enter the interval\n");
scanf("%ld%ld",&a,&b);
printf("odd numbers between the interval\n");
for(c=a+1;c<b;c++)
{
if((c%2)!=0)
{
printf("%d\t",c);
}
}
getch();
}
