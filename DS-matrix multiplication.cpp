#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[50][50],b[50][50],mul[50][50],row,col,i,j,k;
	printf("enter the  number of row:");
	scanf("%d",&row);
	printf("enter the number of column:");
	scanf("%d",&col);
	printf("enter the first matrix elements:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix elements:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("multiplication of matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			mul[i][j]=0;
			for(k=0;k<col;k++)
			{
				mul[i][j]=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
