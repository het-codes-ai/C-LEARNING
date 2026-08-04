#include<stdio.h>
int main(){
	float dollars,rupees,converter;
	printf("Enter money in dollars :\n");
	scanf("%f",&dollars);
	converter=95.37;
	rupees=dollars*converter;
	printf("Your dollars are converted to %.2f rupees",rupees);
	return 0;
	}