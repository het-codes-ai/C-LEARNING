#include<stdio.h>
int main()
{
	float celcius,farenheit;
	printf("Enter temperature in celcius :\n");
	scanf("%f",&celcius);
	farenheit=(9.0/5.0*celcius)+32;
	printf("Temperature converted to %.2f Farenheit",farenheit);
	return 0;
	}