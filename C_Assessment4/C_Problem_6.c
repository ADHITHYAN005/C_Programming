#include <stdio.h>

void printodd(int n)
{
    if (n > 20)
        return;

    printf("%d ", n);
    printodd(n + 2);
}

int main()
{
    printodd(11);
    return 0;
}
