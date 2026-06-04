#include <stdio.h>

void printodd(int n)
{
    if (n > 9)
        return;

    printf("%d ", n);
    printodd(n + 2);
}

int main()
{
    printodd(1);
    return 0;
}
