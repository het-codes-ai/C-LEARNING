#include<stdio.h>
#include<math.h>
int main(){
	int num=153;
	int sum=0;
	int org=num;
	while(num>0){
		int digit=num%10;
		sum+=pow(digit,3);
		num/=10;
		}
		if(sum==org){
			printf("IT IS AN ARMSTRONG NUMBER \n");
			}
		else{
			printf("NOT AN ARMSTRONG NUMBER\n");
			}
		return 0;
	}