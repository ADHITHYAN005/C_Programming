#include <stdio.h>
int main()
{
    int n,a,b,sum, result;
    printf("Enter a 2 digit number: ");
    scanf("%d", &n);
    result = n-5;
    a = result/10;
    b = result%10;
    sum= a+b;
    (sum % 2 != 0) ? printf("%d", result) : printf("%d", 0);
    return 0;
}
