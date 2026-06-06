#include <stdio.h>

int main()
{
    int i = 2, n = 10, count = 0;

    while (i * i <= n)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
        i++;
    }

    printf("The number of counts = %d\n", count);

    return 0;
}
