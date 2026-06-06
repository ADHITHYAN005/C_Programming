#include <stdio.h>

int main()
{
    int n, temp, sum = 0, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    /* Sum of digits */
    temp = n;
    while(temp != 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    /* Prime check */
    if(n <= 1)
    {
        flag = 0;
    }
    else
    {
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1 && sum == 14)
        printf("Prime and sum of digits is 14");
    else
        printf("Condition not satisfied");

    return 0;
}
