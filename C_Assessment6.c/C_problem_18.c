#include <stdio.h>

int main()
{
    int n, i = 2;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    int a = n % 100;   // last two digits

    if (a <= 1)
    {
        isPrime = 0;
    }

    while (i * i <= a)
    {
        if (a % i == 0)
        {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime)
        printf("%d is prime\n", a);
    else
        printf("%d is not prime\n", a);

    return 0;
}
