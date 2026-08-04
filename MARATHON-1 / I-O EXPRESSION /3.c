#include<stdio.h>
int main()
{
	float radius,diameter,circumference,area,pi;
	printf("Enter radius :\n");
	scanf("%f",&radius);
	pi=3.14;
	diameter=2*radius;
	circumference=2*pi*radius;
	area=pi*radius*radius;
	printf("Diameter =%.2f\n",diameter);
	printf("Circumference = %.2f\n",circumference);
	printf("Area = %.2f\n",area);
	return 0;
	} 