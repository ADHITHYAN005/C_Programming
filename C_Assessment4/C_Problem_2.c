#include <stdio.h>

void printNumbers(int n)
{
    if (n >= 1)
    {
        printf("%d\n", n);
        printNumbers(n - 1);
    }
    else
    {
        return;
    }
}

int main()
{
    printNumbers(5);
    return 0;
}
