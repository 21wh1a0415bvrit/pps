#include<stdio.h>
int main()
{
	printf("\n__GRAND WELCOME TO ALL THE CUSTOMERS__");
    printf("\n-*-THE DELICIOUS HOME-*-\n");
    printf("MENU :\n");
    printf("\n1.IDLI\ncode:1111\ncost:20/-\n");
    printf("\n2.DOSA\ncode:2222\ncost:25/-\n");
    printf("\n3.POORI\ncode:3333\ncost:30/-\n");
    printf("\n4.BONDA\ncode:4444\ncost:35/-\n");
    printf("\n5.CHAPATI\ncode:5555\ncost:40/-\n");
    printf("\n6.PAROTA\ncode:6666\ncost:45/-\n");
    int code,a,b,c,d,e,f;
    a=1,b=2,c=3,d=4,e=5,f=6;
    printf("\nPLEASE ENTER THE CODE OF THE ITEM\n");
    scanf("%d",&code);
    switch(code)
    {
	case 1111: printf("\nORDER CONFIRMED OR NOT\n");
	printf("\nEnter 1 if you want to confirm the order\n");
	scanf("%d",&a);
	case 1:printf("Your order for IDLI is confirmed.\nPlease pay 20/-\n");
    printf("THANK YOU!! VISIT AGAIN");
    break;
    case 2222: printf("\nORDER CONFIRMED OR NOT\n");
	printf("\nEnter 1 if you want to confirm the order\n");
	scanf("%d",&b);
	case 2:printf("Your order for DOSA is confirmed.\nPlease pay 25/-\n");
    printf("THANK YOU! VISIT AGAIN");
    break;
    case 3333: printf("\nORDER CONFIRMED OR NOT\n");
	printf("\nEnter 1 if you want to confirm the order\n");
	scanf("%d",&c);
	case 3:printf("Your order for POORI is confirmed.\nPlease pay 30/-\n");
    printf("THANK YOU! VISIT AGAIN");
    break;
  	case 4444: printf("\nORDER CONFIRMED OR NOT\n");
	printf("\nEnter 1 if you want to confirm the order\n");
	scanf("%d",&d);
	case 4:printf("Your order for BONDA is confirmed.\nPlease pay 35/-\n");
    printf("THANK YOU! VISIT AGAIN");
    break;  
   	case 5555: printf("\nORDER CONFIRMED OR NOT\n");
	printf("\nEnter 1 if you want to confirm the order\n");
	scanf("%d",&e);
	case 5:printf("Your order for CHAPATI is confirmed.\nPlease pay 40/-\n");
    printf("THANK YOU! VISIT AGAIN");
    break;
   	case 6666: printf("\nORDER CONFIRMED OR NOT\n");
	printf("\nEnter 1 if you want to confirm the order\n");
	scanf("%d",&a);
	case 6:printf("Your order for PAROTA is confirmed.\nPlease pay 45/-\n");
    printf("THANK YOU! VISIT AGAIN");
    break;
    default: printf("YOUR ORDER IS INVALID\nPLEASE SELECT OTHER DISH\nTHANK YOU\n");
	}
    return 0;
}
