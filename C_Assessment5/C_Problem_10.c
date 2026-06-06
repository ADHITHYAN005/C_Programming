#include <stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 70; i <= 79; i++)
    {
        if(i % 2 != 0)   // Check if odd
        {
            sum = sum + i;
        }
    }

    printf("Sum = %d", sum);

    return 0;
}
