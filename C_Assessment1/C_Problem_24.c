#include <stdio.h>
int main()
{
    int n, a, b, c,result;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    result = n-5;
    a = result / 100;
    b = (result / 10) % 10;
    c = result % 10;
    (a && c % 2 !=0) ? printf("%d", result) : printf("%d", 0);
    return 0;
}
