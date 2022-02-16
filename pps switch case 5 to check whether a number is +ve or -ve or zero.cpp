#include<stdio.h>  
int main()
{
int x;
printf("\nEnter a value for x\n");
scanf("%d",&x);
switch(x>0)
    {
     	case 1:printf("%d is a positive number\n",x);
     	break;
     	case 0:
	      switch (x<0)
	       {
	      	 case 0:printf("x is zero");
     	     break;
     	     case 1:printf("\n%d is a negative number\n",x);
     	     break;
        	}
    	break;
	default: printf("Invalid input/nPlease enter a number.");
   	}
		return 0;
}
