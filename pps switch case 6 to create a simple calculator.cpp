#include<stdio.h>  
int main()
{
char op;
double x,y;
int a,b;
printf("\nEnter an operator for op(+or-or/or*or%):\n");
scanf("%c",&op);
printf("Enter 2 operands\n");
scanf("%lf%lf",&x,&y);
printf("\nEnter 2 integers\n");
scanf("%d%d",&a,&b);
switch(op)
    {
     	case '+':printf("\n%lf+%lf=%lf\n",x,y,x+y);
     	break;
    	case '-':printf("%lf-%lf=%lf\n",x,y,x-y);
     	break;
     	case '/':printf("%lf/%lf=%lf\n",x,y,x/y);
     	break;
     	case '*':printf("%lf*%lf=%lf\n",x,y,x*y);
     	break;
     	case '%':printf("%d mod %d=%d\n",a,b,a%b);
     	break;
		default: printf("Invalid input/nPlease enter a valid operator +or-or/or*.");
   	}
		return 0;
}
