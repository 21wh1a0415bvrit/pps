#include<stdio.h>
#include<ctype.h>
main()
{
	char a;
	printf("\nEnter a digit a\n");
	scanf("%c",&a);
	if(isdigit(a))
	 printf("x is a digit");
	else
	{
	printf("x is not a digit");
    }
}
