#include<stdio.h>
int main()
{
int n,a,d,i,val,sum=0;
printf("Enter the no. of terms in the arithmetic progression:");
scanf("%d",&n);
printf("Enter the first term:");
scanf("%d",&a);
printf("Enter the common difference:");
scanf("%d",&d);
for(i=0;i<n;i++)
 {
 val=a+i*d;
 sum+=val;
 }
printf("Ans is %d.",sum);
return 0; 
}
