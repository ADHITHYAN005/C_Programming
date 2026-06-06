#include <stdio.h>
int main()
{
    int n,  last, sub;
    printf("Enter a number: ");
    scanf("%d", &n);
   last = n % 10;
   sub = n-1;
     if(last %2 ==0)
        {
        	printf("The number %d \n",n);
        }
        else
        {
        	
        	printf("The number %d \n", sub);
        }
   return 0;
}
