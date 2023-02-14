#include<stdio.h>
int main()
{
	int n,fact=1,i;
	printf("enter n value:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("enter the positive number");
	}
	else
	{
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf("the factorial of a number:%d",fact);
	}
}
}
