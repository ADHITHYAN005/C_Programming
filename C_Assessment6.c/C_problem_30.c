#include <stdio.h>
int main()
{
    int a, b, hcf, small;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    small = (a < b) ? a : b;
    hcf = small;
    while (hcf >= 1)
    {
        if (a % hcf == 0 && b % hcf == 0)
        {
            printf("HCF = %d", hcf);
            break;
        }

        hcf--;
    }
return 0;
}
