#include<stdio.h>
int main()
{
int a[100],n,max=1000;
printf("Enter the size of the array:");
scanf("%d",&n);
printf("Enter %d element to form array :",n);
for(int i=1;i<=n;i++)
scanf("%d",&a[i]);
for(int i=1;i<=n;i++)
{
    if(a[i]<max)
    max=a[i];
}
printf("%d is smaller",max);
return 0; 
}
