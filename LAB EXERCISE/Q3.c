#include <stdio.h>
int main()
{
	int a,b,sum,diff,prod,rem,quot1;
	float quot2;
	
	printf("Enter your 1st number\n");
	scanf("%d",&a);
	printf("Enter your 2nd number\n");
	scanf("%d",&b);
	
	sum=a+b;
	diff=a-b;
	prod=a*b;
	quot1=a/b;
	rem=a%b;
	quot2=a%b;
	
	printf("sum is %d",sum);
	printf("\ndiff is %d",diff);
	printf("\nproduct is %d",prod);
	printf("\nremainder is %d",rem);
	printf("\nquotient is %d",quot1);
	printf("\nquotient is %.2f",quot2);	
}