#include<stdio.h>
int main()
{
	float angle1,angle2,angle3;
	printf("Enter 1st angle\n");
	scanf("%f",&angle1);
	printf("Enter 2nd angle\n");
	scanf("%f",&angle2);
	if(angle1+angle2>=180){
		printf("INVALID ANGLES !!!");	
		}
	else{
	angle3=180-angle1-angle2;
	printf("3rd angle of triangle is %.2f",angle3);
	}
	return 0;
	}