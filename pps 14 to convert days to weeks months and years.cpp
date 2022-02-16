#include <stdio.h>
int main()
{
	int ndays,y,m,w,d;	
	printf("no. of days:\n");
	scanf("%d", &ndays);
	y = ndays/365;
	m = ndays/30;
	w=ndays/7;
	d = ndays;
	printf(" %d Year(s) \n %d Month(s) \n %d Weeek(s) \n %d Day(s)",y,m,w,d);
}
