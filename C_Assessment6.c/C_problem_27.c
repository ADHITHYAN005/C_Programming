#include <stdio.h>
int main()
{
    int n = 0, temp, sum, count = 0;
    while (n < 100000)
    {
        temp = n;
        sum = 0;
        while (temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == 14)
        {
            count++;
        }

        n++;
    }

    printf("Total count = %d", count);
    return 0;
}
