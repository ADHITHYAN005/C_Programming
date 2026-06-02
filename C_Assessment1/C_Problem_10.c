#include<stdio.h>
int main()
{
	int a;
	printf("enter a  three digit number:");
	scanf("%d",&a);
	printf("Tens digit = %d", (a/ 10) % 10);
	return 0;
	}
