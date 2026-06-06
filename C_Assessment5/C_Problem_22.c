#include <stdio.h>

int main()
{
    int i, count = 0;

    for(i = 10; i <= 99; i++)
    {
        if(i % 2 != 0)
            count++;
    }

    printf("Total number of two-digit odd numbers = %d", count);

    return 0;
}
