#include<stdio.h>
int main()
{
	int a,x,y;
	printf("enter a number:");
	scanf("%d", &a);
	x = a/100;
	y = a%100;
	if(x==y)
	{
		printf("success\n");
	}
	else
	{
	printf("failure\n");	
	}
	return 0;
}
	
