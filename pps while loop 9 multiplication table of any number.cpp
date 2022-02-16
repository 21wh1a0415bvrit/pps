#include<stdio.h>
int main()
{
float n;
int i=1;
printf("Enter an integer\n");
scanf("%f",&n);
printf("\nMultiplication table of %f is",n);
while(i<=10)
     {
     printf("\n%f * %d = %f",n,i,n*i);
     i++;
     }
    printf("\nThe loop has ended");
    return 0;
}
