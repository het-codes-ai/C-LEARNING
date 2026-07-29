#include <stdio.h> 
int main(){
	float l,b,area,perimeter;
	printf("Enter length: \n");
	scanf("%f",&l);
	printf("Enter breadth: \n");
	scanf("%f",&b);
	
	area=l*b;
	perimeter=2*(l+b);
	
	printf("Area is:%.2f",area);
	printf("Perimeter is:%.2f",perimeter);
	
	return 0;
}