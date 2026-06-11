#include<stdio.h>
void disp_2digit_even_sum6(int a)
{
	int i,b,c,sum=0;
	for (i=10;i<=a;i+=2)
    {
    	b=i/10;
    	c=i%10;
    	sum=c+b;
    	if(sum==6)
    	{
    		printf("The odd numbers is %d\n",i);
    	}
    
    }
}
int main()
{
	int a=99;
	disp_2digit_even_sum6(a);
	return 0;
}
