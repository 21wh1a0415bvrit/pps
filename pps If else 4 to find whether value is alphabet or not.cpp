#include<stdio.h>
#include<ctype.h>
main()
{
	char x;
	printf("\nEnter character x\n");
	scanf("%c",&x);
	if(isupper(x)||islower(x))
	 printf("x is an alphabet");
	else
	printf("x is not an alphabet");
}



