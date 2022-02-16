#include <stdio.h>
int main()
{
int month; // Input month numbers
	printf("Enter month number(1-12): ");
	scanf("%d", &month);
	switch(month)
	{
		case 1: printf("January\n31 days");
		break;
		case 2: printf("February\n28 days");
		break;
		case 3: printf("March\n31 days");
		break;
		case 4: printf("April\n30 days");
		break;
		case 5:	printf("May\n31 days");
		break;
		case 6: printf("June\n30 days");
		break;
		case 7: printf("July\n31 days");
		break;
		case 8: printf("August\n31 days");
		break;
		case 9: printf("September\n30 days");
		break;
		case 10: printf("October\n31 days");
		break;
		case 11: printf("November\n30 days");
		break;
		case 12: printf("December\n31 days");
		break;
		default: printf("Invalid input/nPlease enter a month number between 1-12.");
		}
		return 0;
}
