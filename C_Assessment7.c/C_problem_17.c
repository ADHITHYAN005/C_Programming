#include <stdio.h>
int check_prime_and_sum14(int n)
{
    int i=2;
    while(i*i<n)
    { 
       i++;
       int a = n/10;
       int b = n%10;
        int sum = a + b;
    	if(n%i!=0 && sum ==14)
    	{
    		printf("The number is prime and sum is equal to 14");
    	}
    	else if (n%i==0 && sum==14)
    	{
    		printf("Not prime number but sum is equal to 14");
    	}
    	else if (n%i!=0 && sum!=14)
    	{
    		printf("The number is prime but sum is not equal to 14 ");
    		}
    	else
    	{
    		printf("The not prime and not equal to 14");
    	}
    		
    
    if(n==1)
    {
    	printf("not prime");
    	}
    
   return 0;
    }
}
    
int main ()
 {
    	int r,n;
    	printf("The valueofn is");
    	scanf("%d",&n);
    	r=check_prime_and_sum14(n);
    	printf("%c",r);
    	return 0;
 }
