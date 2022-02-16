#include<stdio.h>
#include<math.h>
main()
{
	double x1,x2,y1,y2,Distance;
	printf("\nEnter P\n");
	scanf("%lf\%lf",&x1,&y1);
	printf("\nEnter Q\n");
	scanf("%lf\%lf",&x2,&y2);
    Distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%lf",Distance);
}
