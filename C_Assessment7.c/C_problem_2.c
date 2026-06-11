#include<stdio.h>
void disp_dessend(int a)
{
	int i;
	for (i=5;i>=a;i--)
	printf("%d\n", i);
}
int main()
{
	int a=1;
	disp_dessend(a);
	return 0;
}
