#include<stdio.h>
int main()
{
	int a,x,y;
	printf("enter a number:");
	scanf("%d", &a);
	x = (a/10)%10;
	y = a%10;
	if(x==y)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
}
	
