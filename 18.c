#include<stdio.h>
int main()
{
int a,b,n,rem,armstrong;
printf("Enter two limits:");
scanf("%d%d",&a,&b);
for(int i=a;i<b;i++)
 {
 n=i;
 armstrong=0;
 while(n!=0)
  {
   rem=n%10;
   armstrong+=(rem*rem*rem);
   n/=10;
  }
 if(armstrong==i)
  {
  printf("%d\t",i);
  }
 }
return 0; 
}
