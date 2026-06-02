#include <stdio.h>
int main()
{
    int  n,a, b, result;
    printf("Enter a 2-digit number: ");
    scanf("%d", &n);
    a = n / 10;
    b = 0;
    result=a*10+b;
    printf("result of the number :%d", result);
    return 0;
}   
