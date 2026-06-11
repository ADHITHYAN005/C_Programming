#include<stdio.h>
void disp_2digit_odd_below20(int a)
{
	int i;
	for (i=11;i<a;i+=2)
    {
  printf("The odd numbers is %d\n",i);
    
    }
}
int main()
{
	int a=20;
	disp_2digit_odd_below20(a);
	return 0;
}
