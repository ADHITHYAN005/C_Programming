#include <stdio.h>

int check_last_digit_odd(int n)
{
    int a ;
    a=n%10;
    if(a%2==0)
    {
    	printf("%d",n);
    }
    else
    {
    	printf("%d",n-1);
    	} 
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

     check_last_digit_odd(n);

    return 0;
}
