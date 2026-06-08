#include<stdio.h>
void disp_assend(int a)
{
	int i;
	for (i=1;i<=a;i++)
	printf("%d\n", i);
}
int main()
{
	int a=5;
	disp_assend(a);
	return 0;
}
