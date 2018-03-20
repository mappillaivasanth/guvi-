#include<stdio.h>
int main()
{  
    int a=0,b=1,c,n;
    printf("Enter the number for fibanoci series : ");
    scanf("%d",&n);
    printf("fibanoci series for %d number is : \n",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        
    }

  
 return 0;
}
