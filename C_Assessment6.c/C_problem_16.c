#include <stdio.h>
int main()
{
    int i=2,  n;
    printf("Enter a number: ");
    scanf("%d", &n);
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
