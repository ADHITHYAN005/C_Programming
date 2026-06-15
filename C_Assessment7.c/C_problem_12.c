#include <stdio.h>

int disp_sum_all_digits(int n)
{
    int a,sum = 0;
    while(n!=0)
    {
     a = n%10;
        sum = sum + a;
        n = n / 10;
    }
    
printf("%d",sum);
    return sum;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

     disp_sum_all_digits(n);

    return 0;
}
