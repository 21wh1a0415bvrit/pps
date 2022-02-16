#include<stdio.h>
int main()
{
 int ClassesHeld,ClassesAttended;
 float Percentage;
	printf("\n Enter Total number of classes held\n");
	scanf("%d",&ClassesHeld);
	printf("\n Enter number of clases attended\n");
	scanf("%d",&ClassesAttended);
	Percentage=(ClassesAttended/ClassesHeld)*100;
	if (Percentage>75)
	printf("\nThe student is allowed for the exam");
	else
	printf("\nThs student is not allowed for exam");
}
