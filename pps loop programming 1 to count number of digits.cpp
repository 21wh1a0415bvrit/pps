#include <stdio.h>
main()
{
	int a,count=0;
	printf("\nEnter the number : ");
	scanf("%d",&a);
	while(a>0)
	{
		a /= 10;
		count += 1;
	}
	printf("\nNumber of digits in the given number is  : %d", count);
}
