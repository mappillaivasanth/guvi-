#include <stdio.h>
int main()
{
    int a,b,i,c,sum=1;
    printf("enter the value:\n");
    scanf("%d%d",&a,&b);
    sum+=a;
    while(sum<b)
    {
        c=0;
       for(i=2;i<=sum/2;++i)
       {
        if(sum%i==0)
        {
            c=1;
            break;
        }
       }
        if(c==0)
        
          printf("%d\t",sum);
          ++sum;
        
   }
}
