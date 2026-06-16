#include <stdio.h>
int check_first_2digit_prime(int n)
{
    int i=2;
    while(i*i<n)
    {
    	if(n%i==0)
    	{
    		printf("The number is not prime");
    	}
    	else
    	{
    		printf("prime number");
    	}
    	i++;
    }
    
    if(n==1)
    {
    	printf("not prime");
    	}
   return 0;
}
int main()
{
	int r,n;
	printf("The value of r ");
	scanf("%d", &r);
	n=r%100;
	check_first_2digit_prime(n);
	return 0;
}
