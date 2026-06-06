#include <stdio.h>

int isPerfectSquare(int n)
{
    int i;
    for(i = 1; i * i <= n; i++)
    {
        if(i * i == n)
            return 1;
    }
    return 0;
}

int main()
{
    int n, digit, num = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 100;   // take last two digits

        if(digit >= 10 && digit <= 99)
        {
            if(isPerfectSquare(digit))
                count++;
        }

        n = n / 10;
    }

    printf("Total two-digit perfect squares = %d", count);

    return 0;
}
