#include <stdio.h>
int main()
{
    int n = 9999;
    while (n >= 1000)
    {
        if (n % 7 == 0 && n % 9 == 0)
        {
            printf("Biggest four-digit number divisible by 7 and 9 = %d", n);
            break;
        }
        n--;
    }
return 0;
}
