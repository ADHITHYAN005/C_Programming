#include <stdio.h>

int main()
{
    int n, lastDigit, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    lastDigit = n % 10;

    if (lastDigit % 2 == 0)
    {
        printf("%d", n);
    }
    else
    {
        result = n - 1;
        printf("%d", result);
    }

    return 0;
}
