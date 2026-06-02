#include <stdio.h>
int main()
{
    int a, sum;
     printf("Enter a two-digit number: ");
    scanf("%d", &a);
     sum = (a / 10) + (a % 10);
     printf("Sum of digits = %d", sum);
 return 0;
}
