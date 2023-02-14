#include<stdio.h>
int main()
{
		int evenc=0,oddc=0,n,arr[50],i;
		printf("enter the no of elements in array:");
		scanf("%d",&n);
		printf("enter the elements:");
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
		for(i=0;i<n;i++)
		{
			if(arr[i]%2==0){
				evenc++;
			}
			else{
				oddc++;
			}
		}
		printf("the even count is=%d",evenc);
		printf("the odd count is=%d",oddc);
	}

