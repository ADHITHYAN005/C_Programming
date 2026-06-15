#include <stdio.h>

int countDigits(int n)
{
    int count = 0;

    if (n == 0)
        return 1;

    while (n != 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number of digits = %d", countDigits(n));

    return 0;
}
