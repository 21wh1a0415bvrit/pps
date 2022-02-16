#include<stdio.h>
#include<math.h>
int main()
{
float A_c,A_r,P_c,P_r,l,b,r,PI=3.14; // A_c is area of circle, A_r is area of rectangle, P_c is perimeter of circle, P_r is perimeter of rectangle.
printf("\n Enter r,l,b\n"); // r=radious, l=length, b=breadth.
scanf("%f%f%f",&r,&l,&b);
A_c=PI*r*r,P_c=2*PI*r,A_r=l*b,P_r=2*(l+b);
printf("\n the solutions are\n%f\n%f\n%f\n%f\n",A_c,A_r,P_c,P_r);
}
