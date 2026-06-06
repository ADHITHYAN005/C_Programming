#include <stdio.h>

int main()
{
    int n, tens, ones;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    if(n >= 10 && n <= 99)
    {
        tens = n / 10;
        ones = n % 10;

        if((tens == 2 || tens == 3 || tens == 5 || tens == 7) &&
           (ones == 2 || ones == 3 || ones == 5 || ones == 7))
        {
            printf("Both tens digit and one's digit are prime");
        }
        else
        {
            printf("Condition not satisfied");
        }
    }
    else
    {
        printf("Not a two-digit number");
    }

    return 0;
}
