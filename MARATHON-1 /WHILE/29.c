#include<stdio.h>
int main(){
	int i=1,n;
	long long fact=1;
	printf("Enter your number\n");
	scanf("%d",&n);
	while(i<=n){
		fact*=i;
		i++;
		} 
		printf("Factorial of %d is %lld",n,fact);
		return 0;
	}