#include<stdio.h>
int main()
{
	int i, sum=0;
	printf("enter no.");
	scanf("%d",&i);
	sequence:
	    sum=sum+i;
		i--;
		if(i>=1)
        goto sequence; 
	    printf("the sum %d", sum);
		return 0;
}
