#include <stdio.h>

int main()
{
    int n, temp, first, last, digits = 0, power = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp /= 10;
        digits++;
        power *= 10;
    }

    first = temp;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("After interchange = %d\n", result);

    return 0;
}
