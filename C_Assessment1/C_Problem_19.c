#include <stdio.h>
int main()
{
    int num, a, b, c,result;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    a = num / 100;
    b = (num / 10) % 10;
    c = 2;
   result = (a*100)+(b*10)+c;
   printf("result of replacing 2 in ones digit %d:", result);
    return 0;
}
