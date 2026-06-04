#include <stdio.h>

void printOdd(int n)
{
    int tens, ones;

    if (n > 99)
        return;

    tens = n / 10;
    ones = n % 10;

    if (n % 2 != 0 && (tens + ones == 7))
        printf("%d ", n);

    printOdd(n + 1);
}

int main()
{
    printOdd(10);
    return 0;
}
