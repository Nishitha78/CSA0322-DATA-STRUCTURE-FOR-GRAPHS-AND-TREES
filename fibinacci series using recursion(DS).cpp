#include<stdio.h>
int main()
{
	int sum=0,n,i;
	printf("enter n");
	scanf("%d",&n);
	printf("fibinocci series:");
	for(i=0;i<n;i++){
	int fib=fibinocci(1);
	printf("%d",fibinocci);
	sum=sum+fibinocci;
	}
	printf("sum of the fibinocci series is %d",sum);
	return 0;
}
