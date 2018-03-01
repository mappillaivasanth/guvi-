#include <stdio.h>

int main()
{
    int a[100],n,t,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter %d elements to form array :",n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Array elements and its index :\n");
    for(int i=0;i<n;i++)
    printf("\t%d\t%d\n",a[i],i);
    
    return 0;
}
