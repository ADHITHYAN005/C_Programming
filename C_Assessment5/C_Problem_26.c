#include <stdio.h>

int main()
{
    int i;

    printf("Four-digit numbers divisible by 7 and 9 are:\n");

    for(i = 1000; i <= 9999; i++)
    {
        if(i % 63 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
