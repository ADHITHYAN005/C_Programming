#include <stdio.h>
int main()
{
    int  n,a, b, reverse;
    printf("Enter a 2-digit number: ");
    scanf("%d", &n);
    a = n / 10;
    b = n % 10;
    reverse = (b*10) + a;
    printf("reverse of the number :%d", reverse);
    return 0;
}   
