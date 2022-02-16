#include<stdio.h>
int main()
{
int i,n,sum;
i=2,sum=0;
printf("Enter the limit of numbers\n");
scanf("%d",&n);
while(i<=n)
     {
     	sum=sum+i;
	    i+=2;
     }
     printf("The sum of all even numbers between 1 to %d = %d\n",n,sum);
printf("The loop has ended");
    return 0;
}
