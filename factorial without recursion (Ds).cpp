#include<stdio.h>
int main()
{
	int n,factorial=1,i;
	printf("enter positive number");
	scanf("%d",n);
	if(n<0)
	printf("factorial is undesired for negative numbers");
	else
	{
		for(i=1;i<=n;i++)
		factorial = factorial*i;
	}
	printf("factorial of %d is %d",n,factorial);
	return 0;
}
