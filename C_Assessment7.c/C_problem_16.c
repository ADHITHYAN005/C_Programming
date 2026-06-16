#include <stdio.h>
int check_prime(int n)
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
	printf("The value of n ");
	scanf("%d", &n);
	r=check_prime(n);
	printf("%c\n",r);
	return 0;
}
