#include <stdio.h>

int firstDigit(int n)
{
    if (n < 10)
        return n;

    return firstDigit(n / 10);
}

int power10(int n)
{
    if (n < 10)
        return 1;

    return 10 * power10(n / 10);
}

int main()
{
    int n, first, last, middle, p, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    first = firstDigit(n);
    last = n % 10;
    p = power10(n);

    middle = (n % p) / 10;

    result = last * p + middle * 10 + first;

    printf("Result = %d", result);

    return 0;
}
