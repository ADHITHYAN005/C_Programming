#include<stdio.h>
int main()
{
	int a,x,y;
	printf("enter a number:");
	scanf("%d", &a);
	x = a/10;
	y = a%10;
	(x==y)? printf("1\n") : printf("0\n");
	return 0;
}
	
