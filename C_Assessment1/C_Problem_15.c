#include <stdio.h>
int main()
{
    int  n,a, b,c,d, reverse;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;
    reverse = (a*1000)+ (b*100)+ (d*10) + c;
    printf("reverse of the number :%d", reverse);
    return 0;
}   
