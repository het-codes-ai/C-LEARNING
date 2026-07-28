#include <stdio.h>
int main(){
	float celcius, farenheit;
	printf("Enter your temperature:\n ");
	scanf("%f",&celcius);
	farenheit=(celcius*9.0/5.0)+32;
	printf("Your temperature in farenheit =%f",farenheit) ;
}