#include<stdio.h>
main()
{
	float F,C;
	printf("\nEnter tempeeature in Fahrenheit\n");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("\n%.2f F = %.2f C",F,C); //.2f means correct to 2 decimals
}
