#include<stdio.h>
void main()
{
int n,temp,i,armstrong=0;
printf("Enter a three digit number:");
scanf("%d",&n);
temp=n;
while(temp!=0)
 {
 i=temp%10;
 armstrong+=(i*i*i);
 temp/=10;
 }
 if(armstrong==n)
  printf("Yes");
 else
  printf("No");
  

}
