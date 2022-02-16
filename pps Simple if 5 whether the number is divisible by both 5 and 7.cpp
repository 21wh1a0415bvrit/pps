#include<stdio.h>
main()
{
	int a;
	printf("\n Enter a\n");
	scanf("%d",&a);
	if(a%5==0)
	{
	printf("\nThe number is only divisible by 5");
    }
    if(a%7==0)
    {
    	printf("\nThe number is only divisible by 7");
    }
	if((a%5==0)&&(a%7==0))
	{
	printf("\nSo the number is divisible by both 5 and 7");
    }
    else
    {
    	printf(" ");
    }
}
