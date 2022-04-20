#include <stdio.h>
#include <conio.h>
int main()
{
	int value;
	printf("enter the number/n");
	scanf("%d",&value);
	if (value >0)
		printf("number is positive/n");
	else if(value <0)
	printf("number is negative/n");
	else
	printf("number is zero");
	return 0;
}