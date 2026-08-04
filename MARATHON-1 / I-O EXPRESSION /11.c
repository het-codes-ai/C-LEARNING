#include<stdio.h>
int main(){
	int num=2468;
	int ans=0;
	while(num!=0){
		int digit=num%10;
		num/=10;
		ans=(ans*10)+digit;		
		}
		printf("Reversed number is %d",ans);
		return 0;
	}