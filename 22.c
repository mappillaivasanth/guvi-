#include<stdio.h>
int main()
{
int a[100],n,max=0;
printf("Enter the size of the array:");
scanf("%d",&n);
printf("Enter %d element to form array :",n);
for(int i=1;i<=n;i++)
scanf("%d",&a[i]);
for(int i=1;i<=n;i++)
{
    if(a[i]>max)
    max=a[i];
}
printf("%d is larger ",max);
return 0; 
}
