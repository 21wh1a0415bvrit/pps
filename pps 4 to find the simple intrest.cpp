#include<stdio.h>
#include<math.h>
main()
{
	float SI,P,T,R;
	printf("\nEnter P,T,R\n");
	scanf("%f\n%f\n%f",&P,&T,&R);
	SI=(P*T*R)/100;
	printf("%f",SI);
}                      
