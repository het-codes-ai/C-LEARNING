#include<stdio.h>
int main(){
	int days,years,months,weeks;
	printf("Enter number of days\n");
	scanf("%d",&days);
	years=days/365;
	days%=365;
	months=days/30;
	days%=30;
	weeks=days/7;
	days%=7;
	printf("%d years %d months %d weeks %d days",years,months,weeks,days);
	return 0;
	}