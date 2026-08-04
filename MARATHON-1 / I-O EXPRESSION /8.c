#include<stdio.h>
int main(){
	int a,b,c,d,e,totalmarks;
	float avg,percentage;
	printf("Enter marks of your 5 subjects out of 100\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	totalmarks=a+b+c+d+e;
	avg=totalmarks/5;
	percentage=avg;
	printf("Total marks = %d\n",totalmarks);
	printf("Avg = %.2f\n",avg);
	printf("Percentage = %.2f percentage\n",percentage);
	return 0;
	}