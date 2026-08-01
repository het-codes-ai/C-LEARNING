#include <stdio.h>
int main(){
	float rs,dl,conv;
	printf("ENTER RUPEES \n");
	scanf("%f",&rs);
	conv=0.012f;
	dl=rs*conv;
	printf("Your money in dollar is %.2f",dl);
	printf("Rounded amount is %d",(int)(dl+0.5f));
	}