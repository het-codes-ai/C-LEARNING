#include<stdio.h>
int main(){
	float weight,height,BMI;
	printf("Enter height\n");
	scanf("%f",&height);
	printf("Enter weight\n");
	scanf("%f",&weight);
	BMI=weight/(height*height);
	printf("BMI is %.2f\n\a",BMI);
	float hh=height*height;
	if(hh==height*height)
	printf("The value matches");
	}