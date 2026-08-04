#include<stdio.h>
#include<math.h>
int main(){
	float P,T,R,SI,CI,diff;
	printf("Enter Principle in rs \n");
	scanf("%f",&P);
	printf("Enter Time in years \n");
	scanf("%f",&T);
	printf("Enter Rate of Interest in percentage \n");
	scanf("%f",&R);
	SI=P*R*T/100;
	CI=P*pow((1+(R/100)),T)-P;
	diff=CI-SI;
	printf("Difference between Compound Interest and Simple Interest = %.2f",diff);
	return 0;
	}