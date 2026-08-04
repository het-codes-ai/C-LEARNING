#include<stdio.h>
int main(){
	float cm,m,km; 
	printf("Enter length in cm :");
	scanf("%f",&cm);
	m=cm/100;
	km=m/1000; 
	printf("Length is converted to %.3f m and %.3f km",m,km);
	return 0;
	}
