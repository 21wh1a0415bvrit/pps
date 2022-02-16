/* C program to convert centimeter into meter and kilometer*/
#include <stdio.h>
int main()
{
    float cm, meter, km;
    printf("Enter length in centimeter: ");
    scanf("%f", &cm);              
    meter = cm / 100.0;
    km    = cm / 100000.0;
 printf("Length in Meter = %.2f m \n", meter);
    printf("Length in Kilometer = %.2f km", km);
// %.2f is used to print the fractional value up to two decimal places.
//You can also use %f to print by default up to 6 decimal places. 
}
