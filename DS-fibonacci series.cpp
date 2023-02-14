#include<stdio.h>
int main()
{
	int n1=0,n2=1,nt=n1+n2,i,n;
	printf("enter the no of elements:");
	scanf("%d",&n);
	printf("%d\t%d\t",n1,n2);
	for(i=2;i<n;i++)
	{
		printf("%d\t",nt);
		n1=n2;
		n2=nt;
		nt=n1+n2;
	}
}
