#include<stdio.h>
int main()
{
int sum,product,average,a,b,c;
printf("\nEnter a,b,c\n");
scanf("%d\n%d\n%d",&a,&b,&c);
sum=a+b+c;
product=a*b*c;
average=(a+b+c)/3;
printf("SUM=%d\nPRODUCT=%d\nAVERAGE=%d",sum,product,average);
}
