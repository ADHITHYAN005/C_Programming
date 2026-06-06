#include <stdio.h>

int main()
{
    int i, n, digit, sum, count = 0;

    for(i = 1; i < 100000; i++)
    {
        n = i;
        sum = 0;

        while(n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        if(sum == 14)
            count++;
    }

    printf("Total numbers less than 1 lakh with digit sum 14 = %d", count);

    return 0;
}
