#include<stdio.h>
#include<ctype.h>
main()
{
	char a;
	printf("\nEnter an alphabet a\n");
	scanf("%c",&a);
	if(isupper(a))
	 printf("x is an upper case alphabet");
	else
	{
	printf("x is not an upper case alphabet\n");
	printf("It is either number or a special symbol");
    }
}
