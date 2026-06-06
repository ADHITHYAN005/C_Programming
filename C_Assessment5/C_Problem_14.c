#include <stdio.h>

int main()
{
    int n, temp, first, last, digits = 0, power = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    for(int i = 1; i < digits; i++)
    {
        power = power * 10;
    }

    first = n / power;
    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Result = %d", result);

    return 0;
}
