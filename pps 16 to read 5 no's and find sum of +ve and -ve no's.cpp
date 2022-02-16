#include<stdio.h>
int main()
{
    int total;
    int i;
    int positiveSum = 0;
    int negativeSum = 0;
    printf("\nEnter numbers to add : \n");
    scanf("%d",&total);
    int numbers[total];
    for(i=0; i<total; i++)
	{
        printf("Enter number %d : ",(i+1));
        scanf("%d",&numbers[i]);
    }   
	   for(i=0 ; i<total ; i++)
	{
        if(numbers[i] < 0)
	    {
         negativeSum += numbers[i];
        }
	   else
	   {
         positiveSum += numbers[i];
       }
    }   
	   printf("You have entered : \n");
       for(i=0 ; i<total; i++)
	   {
       printf("%d ",numbers[i]);
    }
       printf("\nsum of Positive numbers : %d",positiveSum);
       printf("\nsum of Negative numbers : %d\n",negativeSum);

}
