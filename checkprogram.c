#include <stdio.h>

int main()
{
   int b=0,c,t,low,high;
   scanf("%d %d",&low,&high);
   printf("Ans\n");
   for(int i=low;i<=high;i++)
   {
   t=i;
    while(i!=0)
       {
           c=i%10;
           b=b+(c*c*c);
           i=i/10;
       }
       if(t==b)
       printf("%d\t",t);
   }   
    return 0;
}
