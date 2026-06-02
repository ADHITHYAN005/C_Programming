#include <stdio.h>
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = n-5;
    (result % 2 != 0) ? printf("%d", result) : printf("%d", 0);
    return 0;
}
