#include<stdio.h>  
int main()
{
int x;
printf("\nEnter a value for x\n");
scanf("%d",&x);
switch(x % 2)
    {
     	case 0:printf("\n%d is an even number\n",x);
     	break;
     	case 1:printf("\n%d is an odd number\n",x);
     	break;
		default: printf("Invalid input/nPlease enter a number.");
   	}
		return 0;
}
