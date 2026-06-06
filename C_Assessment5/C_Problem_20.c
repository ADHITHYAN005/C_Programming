#include <stdio.h>

int main()
{
    int count = 0, i, j, prime;

    for(i = 0; i <= 9; i++)
    {
        prime = 1;

        if(i < 2)
            prime = 0;
        else
        {
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        if(prime)
            count++;
    }

    printf("Total single digit prime numbers = %d", count);

    return 0;
}
