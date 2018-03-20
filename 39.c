#include<stdio.h>
int main()
{  
    int a[100],t;
    printf("Enter 10 numbers :");
    for(int i=1;i<=10;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }}
    
    printf("%d\n",a[1]);

  
 return 0;
}
