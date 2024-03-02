#include<stdio.h>
int main()
{
	int n,n1=0,n2=1,n3,i,sum=1;
	printf("enter the value of n");
	scanf("%d",n1,n2);
	printf("%d%d",n1,n2);
	for (i=2;i<n;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d",n3);
		sum=sum+n3;
	}
	printf("sum of fibinocci series is %d",&sum);
	return 0;
}
