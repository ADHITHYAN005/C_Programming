#include <stdio.h>

int disp_reverse_number(int n)
{
    int rev= 0;
    while(n!=0)
    {
     rev= rev*10+(n%10);
     n=n/10;
    }
    
printf("%d",rev);
    return rev;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

     disp_reverse_number(n);

    return 0;
}
