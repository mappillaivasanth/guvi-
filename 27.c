#include <stdio.h>
int main()
{
	char n;
	printf("enter the string:",n);
	scanf("%s",&n);
	if(n>='a'&&n<='z'||n>='A'&&n<='Z')
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
