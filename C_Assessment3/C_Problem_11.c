#include<stdio.h>
int main()
{
	int a,x,y;
	printf("enter a number:");
	scanf("%d", &a);
	x = a/10;
	y = a%10;
	if(x<=y)
	{
		printf("success\n");
	}
	else
	{
	printf("failure\n");	
	}
	return 0;
}
	
