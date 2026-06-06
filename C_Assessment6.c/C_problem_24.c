#include <stdio.h>
int main()
{
    int n, temp, twoDigit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
     while (temp >= 10)
    {
        twoDigit = temp % 100;
        if (twoDigit == 16 || twoDigit == 25 ||
            twoDigit == 36 || twoDigit == 49 ||
            twoDigit == 64 || twoDigit == 81)
        {
            count++;
        }

        temp = temp / 10;
    }
    printf("Total two-digit perfect square numbers = %d\n", count);
     return 0;
}
