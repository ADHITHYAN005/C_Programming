##include<stdio.h>
int main ()
{
	int a=6,sum=0; 
	while(a>=1)
	{
		sum = sum+a;
		a--;
	}
		printf("The series %d \n", sum);
		
	return 0;
}
