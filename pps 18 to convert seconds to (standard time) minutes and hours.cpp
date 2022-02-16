#include<stdio.h>
main()
{
	float s,m,h;;
   printf("\nEnter Seconds\n");
   scanf("%f",&s);
	m=(s/60);
    h=s/3600;
    printf("Seconds %f\nMinutes %f\nHours %f\n",s,m,h);
}
