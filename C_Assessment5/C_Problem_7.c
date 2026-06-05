#include <stdio.h>

int main()
{
    int num, sum, a, b;

    for(num = 10; num <= 99; num++)
    {
        a = num / 10;   
        b = num % 10;   

        sum = a + b;

        if(num % 2 != 0 && sum == 7)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
