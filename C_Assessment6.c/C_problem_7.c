#include<stdio.h>
int main ()
{
	int a=10,sum,b,c; 
	while(a<=99)
	{
	   b = a/10;
	   c = a%10;
	   sum = b+c;
	   if(sum==7 && a%2!=0)
	   {
	   
	   printf("output%d \n", a);
	   }
	   a++;
	  
	}
		
	return 0;
}
