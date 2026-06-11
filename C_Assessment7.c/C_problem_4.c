#include<stdio.h>
void disp_sum(int a)
{
	int i,sum=0;
	for (i=6;i>=a;i--)
    {
      sum = sum+i;
    }
  printf("The sum is %d\n",sum);
	
}
int main()
{
	int a=1;
	disp_sum(a);
	return 0;
}
