#include <stdio.h>
int main()
{
    int n, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        digit = n % 10;
        if (digit == 0 || digit == 4)
        {
            count++;
        }
         n = n / 10;
    }
 printf("Total single-digit perfect square even digits = %d\n", count);
return 0;
}
