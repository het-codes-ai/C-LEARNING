#include<stdio.h>
#include<math.h>
int main(){
	float P,R,T,A,B;
	P=8000;
	R=7.5;
	printf("YEARS? \n");
	scanf("%f",&T);
	A=P*(pow(1+(R/100),T));
	
	printf("Compound amount is %f\n",A);
	}
