#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter 3 numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>=b && a>=c){
		printf("%d is maximium\n",a);
		}
	else if(b>a && b>c){
		printf("%d is maximum\n",b);
		} 
	else{
		printf("%d is maximum",c);
		}
	return 0;
	}