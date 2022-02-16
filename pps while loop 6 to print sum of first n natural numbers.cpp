#include<stdio.h>
int main()
{
int i,n,sum;
i=1,sum=0;
printf("Enter the limit of numbers\n");
scanf("%d",&n);
while(i<=n)
  {
      sum=sum+i;
	  i++;
  }
     printf("The sum of first %d natural numbers = %d\n",n,sum);
printf("The loop has ended");
    return 0;
}
