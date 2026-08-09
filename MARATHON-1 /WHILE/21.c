#include<stdio.h>
#include<stdlib.h>
int main(){
	int num,temp,digit,rem,count;
	printf("Enter your number : \n");
	scanf("%d",&num);
	
	for(digit=0;digit<=9;digit++){
		count=0;
		temp=abs(num);		
		
		
	if(temp==0 && digit==0){
		count=1;
		}
	else{
		while(temp>0){
			rem=temp%10;
			if(rem==digit){
				count++;
				}
			temp/=10;
			}
			}
		if(count>0){
			printf("%d occurs %d times\n",digit,count);
			}
		}
		return 0;
	}