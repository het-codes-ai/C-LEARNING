#include <stdio.h>
int main()
{
	int a, b, c, d, e, totalmarks;
	float avg, pr;
	char grade;
	printf("Enter marks of your 5 subjects out of 100\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	totalmarks = a + b + c + d + e;
	avg = totalmarks / 5;
	pr = avg;
	printf("Total marks = %d\n", totalmarks);
	printf("Percentage = %.2f percentage\n", pr);
	if (pr >= 90)
	{
		grade = 'A';
	}
	else if (pr >= 80)
	{
		grade = 'B';
	}
	else if (pr >= 70)
	{
		grade = 'C';
	}
	else if (pr >= 60)
	{
		grade = 'D';
	}
	else if (pr >= 40)
	{
		grade = 'E';
	}
	else
	{
		grade = 'F';
	}
	printf("Your grade is %c GRADE", grade);
	return 0;
}