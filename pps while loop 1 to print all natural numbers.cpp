#include<stdio.h>
int main()
{
int i,x;// x is last number
    printf("\nEnter a value for x\n");
    scanf("%d", &x);
    printf("The Natural numbers are\n");
    i=1;
    while(i<=x)
    {
        printf("%d\n", i);
        i++;
    }
printf("The loop has ended");
    return 0;
}
