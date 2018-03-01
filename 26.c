#include <stdio.h>

int main()
{
    int a[100],n,t,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter %d elements to form array :",n);
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
    
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        
    }
    }
    printf("Sorting of numbers is :\n");
    for(int i=1;i<=n;i++)
    printf("%d\t",a[i]);
    i=(n/2)+1;
    printf("\nThe median element in the array is %d ",a[i]);
    
    return 0;
}
