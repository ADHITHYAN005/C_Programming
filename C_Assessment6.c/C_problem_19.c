#include <stdio.h>
int main()
{
    int i=2, flag,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int c = n/10;
     int a = c%100;
     while(i*i<a)
     {
     	if(n%i==0)
     	{
     	 flag=0;
     	 break;
     }
     i++;
     }
     	 
     	 if(flag)
     	{
     		printf("The number is not prime %d\n", a);
     	}
     	else
     	{
     		printf("The number is prime %d\n",a);
     	}
    		 if(n==1)
    {
    	printf("not prime");
    	}
    
   return 0;
}
