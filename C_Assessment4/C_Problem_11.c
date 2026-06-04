#include <stdio.h>

int countDigits(int a)
{
    if (a == 0)
        return 0;

    return 1 + countDigits(a / 10);
}

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a == 0)
        printf("Total digits = 1");
    else
        printf("Total digits = %d", countDigits(a));

    return 0;
}
