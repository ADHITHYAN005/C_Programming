#include <stdio.h>
int main()
{
    int n, temp, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp >= 10)
    {
        int twoDigit = temp % 100;
        if (twoDigit % 2 != 0)
        {
            count++;
        }
        temp = temp / 10;
    }
    printf("Total two-digit odd numbers = %d\n", count);
return 0;
}
