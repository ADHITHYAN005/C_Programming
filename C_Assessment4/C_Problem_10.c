#include <stdio.h>

int sumOdd(int n)
{
    if (n > 79)
        return 0;

    return n + sumOdd(n + 2);
}

int main()
{
    printf("Sum = %d", sumOdd(71));
    return 0;
}
