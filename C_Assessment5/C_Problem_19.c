#include <stdio.h>

int main()
{
    int n, mid;

    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    mid = (n / 10) % 100;

    if (mid == 2 || mid == 3 || mid == 5 || mid == 7)
        printf("Middle two digits form a prime number");
    else if (mid % 2 == 0 || mid % 3 == 0 || mid % 5 == 0 || mid % 7 == 0)
        printf("Middle two digits do not form a prime number");
    else
        printf("Middle two digits form a prime number");

    return 0;
}
