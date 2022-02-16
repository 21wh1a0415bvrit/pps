#include<stdio.h>
main()
{
	float days,years,weeks;
	printf("\nEnter days\n");
	scanf("%lf",&days);
	years=days/365;
	weeks=days/7;
	printf("weeks:%lf\n",weeks);
	printf("years:%lf\n",years);
	printf("days:%lf\n",days);
}
