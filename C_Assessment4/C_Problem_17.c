#include <stdio.h>

int main()
{
    int n, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Not a Prime Number");
        return 0;
    }

check:
    if (i > n / 2)
        goto prime;

    if (n % i == 0)
        goto notprime;

    i++;
    goto check;

prime:
    printf("Prime Number");
    goto end;

notprime:
    printf("Not a Prime Number");

end:
    return 0;
}
