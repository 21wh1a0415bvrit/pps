#include <stdio.h>
int main() 
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int count=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        count++;
    }
    if(count!=0)
    {
        printf("%d is not a prime number\n",num);
    }
    else
    {
        printf("%d is a prime number\n",num);
    }
    
    return 0;
}
