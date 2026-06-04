#include <stdio.h>

int isPrime(int n, int i)
{
    if (n <= 1)
        return 0;

    if (i == 1)
        return 1;

    if (n % i == 0)
        return 0;

    return isPrime(n, i - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n, n / 2))
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}
