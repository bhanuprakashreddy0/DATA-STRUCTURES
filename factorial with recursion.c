#include<stdio.h>
 int factorial(int n){
 	if(n==1){
 		return 1;
	 }
	else{
		return(n*factorial(n-1));
	}
}
	int main(){
		int n;
		printf("enter the value of n:");
		scanf("%d\t",&n);
		printf("the factorial=%d",factorial(n));
	
	}
 
