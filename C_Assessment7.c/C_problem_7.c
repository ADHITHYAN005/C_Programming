#include<stdio.h>
void disp_2digit_odd_sum7(int a)
{
	int i,b,c,sum=0;
	for (i=11;i<a;i+=2)
    {
    	b=i/10;
    	c=i%10;
    	sum=c+b;
    	if(sum==7)
    	{
    		printf("The odd numbers is %d\n",i);
    	}
    
    }
}
int main()
{
	int a=99;
	disp_2digit_odd_sum7(a);
	return 0;
}
