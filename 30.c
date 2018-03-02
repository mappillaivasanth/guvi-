#include<stdio.h>
void main()
{
    int hr1,min1,hr2,min2,t,hr,min;
    printf("Enter first time in hours and minutes :\n");
    scanf("%d %d",&hr1,&min1);
    printf("Enter second time in hours and minutes :\n");
    scanf("%d %d",&hr2,&min2);
    if(((hr1*60)+min1)>((hr2*60)+min2))
    t=((hr1*60)+min1)-((hr2*60)+min2);
    else
    t=((hr2*60)+min2)-((hr1*60)+min1);
    hr=t/60;
    min=(t%60);
    printf("The difference b/w the times is :\n");
    printf("%d %d",hr,min);
    
    
}
