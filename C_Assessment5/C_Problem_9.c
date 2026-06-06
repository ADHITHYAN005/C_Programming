#include <stdio.h>

int main()
{
    int num, tens, ones;

    for(num = 10; num <= 99; num++)
    {
        tens = num / 10;   
        ones = num % 10;   

        if(tens + ones == 6)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
