#include<stdio.h>
int main ()
{
	int a=10,sum=0,c; 
	while(a<=99)
	{
	   c = a/10;
	   if(c==7 && a%2 !=0)
	   {
	     sum = sum +a;
	   }
	   a++;
	}
	   printf("output%d \n", sum);
	return 0;
}
