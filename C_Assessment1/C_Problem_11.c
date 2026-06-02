#include <stdio.h>
int main()
{
    int num, a, b, c, sum;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    a = num / 100;
    b = (num / 10) % 10;
    c = num % 10;
   sum = a + b + c;
   printf("Sum of digits = %d", sum);
    return 0;
}
