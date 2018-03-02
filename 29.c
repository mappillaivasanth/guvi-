#include <stdio.h>

int main()
{
    int a,hr,min;
    printf("Enter time :");
    scanf("%d",&a);
    min=a%60;
    hr=a/60;
    printf("Time is %d hour and %d minutes",hr,min);

    return 0;
}
