#include<stdio.h>
void disp_odd(int a)
{
	int i;
	for (i=1;i<=a;i+=2)
    {
  printf("The odd numbers is %d\n",i);
    
    }
}
int main()
{
	int a=9;
	disp_odd(a);
	return 0;
}
