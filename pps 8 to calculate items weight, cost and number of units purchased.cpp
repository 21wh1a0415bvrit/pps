#include<stdio.h>
int main()
{
float weight,cost,units,totalweight,totalcost;
printf("\n Enter Weight,Cost,Units\n");
scanf("%f%f%f",&weight,&cost,&units);
totalweight=units*weight;
totalcost=cost*units;
printf("TOTAL WEIGHT and TOTAL COST=\n");
printf("%f and %f",totalweight,totalcost);
}
