#include <stdio.h>

int main()
{
    int num, a, b, c, d, result;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    a = num / 1000;
    b = (num / 100) % 10;
    c = (num / 10) % 10;
    d = num % 10;

    result = (b*1000) + (a*100)+ (c*10)+ d;

    printf("Result = %d", result);

    return 0;
}
