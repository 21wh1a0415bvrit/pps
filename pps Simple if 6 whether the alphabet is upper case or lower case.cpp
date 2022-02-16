#include<stdio.h>
#include<ctype.h>
main()
{
	char a;
	printf("\nEnter an alphabet a\n");
	scanf("%c",&a);
	if(isupper(a))
	{
	 printf("x is an upper case alphabet");
    }
	if(islower(a))
	{
	printf("x is an lower case alphabet");
    }
}
