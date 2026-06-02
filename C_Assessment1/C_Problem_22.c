#include <stdio.h>
int main()
{
    int n,a,b, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = n-5;
    a = result/10;
    (a % 2 != 0) ? printf("%d", result) : printf("%d", 0);
    return 0;
}
