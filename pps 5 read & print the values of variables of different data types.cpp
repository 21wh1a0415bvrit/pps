/*TO READ & PRINT THE VALUES OF VARIABLES OF DIFFERENT DATA TYPES*/
#include<stdio.h>
int main()
{
	char a;
	printf("\nEnter a character\n");
	scanf("%c",&a);
	printf("\nThe character is %c\n",a);
	
	int b,c;
	printf("\nEnter 2 numbers\n");
	scanf("%d%i",&b,&c);
	printf("\nThe integers are %d and %i\n",b,c);
	
	int d1,d2;
	printf("\nEnter 2 numbers (+ve and -ve) ----> unsigned integer\n");
	scanf("%u%u",&d1,&d2);
	printf("\nThe +ve number is %u \nThe -ve number is %u\n",d1,d2);
	
	float e,f;
	printf("\nEnter 2 decimal numbers (float)\n");
	scanf("%f%e",&e,&f);
	printf("\nThe decimal numbers are %f and %e\n",e,f);
	
	int g;
	printf("\nEnter a number ----> unsigned octal form\n");
	scanf("%o",&g);
	printf("\nThe octal form of the number is %o\n",g);
	
	int h;
	printf("\nEnter a number ----> unsigned hexadecimal form\n"); 
	scanf("%x",&h);
	printf("\nThe hexadecimal form of number is %x\n",h);
	
	double i;
	printf("\nEnter a decimal number (double)\n");
	scanf("%lf",&i);
	printf("\nThe decimal number is %lf\n",i);
	
	int j;
	printf("\nEnter a number ----> long long int\n");
	scanf("%lld",&j);
	printf("\nThe long long integer is %lld\n",j);
	
	int k;
	printf("\nEnter usigned short integer\n"); 
	scanf("%hi",&k);
	printf("\nThe unsigned short integer is %hi\n",k);
	
	int l;
	printf("\nEnter a long decimal number\n");
	scanf("%Lf",&l);
	printf("\nThe long decimal number is %Lf\n",l);
	
	int m,n;
	printf("\nEnter 2 numbers (unsigned integer short and unsigned long integer)\n");
	scanf("%hu%lu",&m,n);
	printf("\nThe unsigned short integer is %hu\nThe unsigned long integer is %lu\n",m,n);
	
	int o,p;
	printf("\nEnter a long long integer and an unsigned long long integer\n");
	scanf("%lli%llu",&o,&p);
	printf("\nThe long long integer is %lli",o);
	printf("\nTe unsigned long long integer is %llu\n",p);
	
	printf("\nTHE END");
	return 1;
}
