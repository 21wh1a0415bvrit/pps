#include<stdio.h>
int main()
{
int x;// x is last number
    printf("Enter a value for x\n");
    scanf("%d", &x);
    printf("The Natural numbers are\n");
    while(x>=1)
    {
        printf("%d\n",x);
        x--;
    }
printf("The loop has ended");
    return 0;
}
