#include<stdio.h>
int main()
{
	int a,x,y,v,w;
	printf("enter a number:");
	scanf("%d", &a);
	v = a/1000;
	w = (a/100)%10;
	x = (a/10)%10;
	y = a%10;
	if(y==w && x==v)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
}
	
