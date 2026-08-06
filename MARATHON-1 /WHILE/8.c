#include<stdio.h>
#include<math.h>
int main(){
	int n=1000;
	int i=0;
	while(i<=n){
		int j=i;
		int sum=0;
		while(j>0){
			int digit=j%10;
			sum+=pow(digit,3);
			j/=10;			
			}
		if(sum==i){
			printf("%d\n",i);
			}		
	i++;	
		}
		return 0;
	}