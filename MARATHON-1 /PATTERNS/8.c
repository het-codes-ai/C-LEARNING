#include <stdio.h>
int main()
{
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j <= i; j++)
			{
				printf("0 ");
			}
			printf("\n");
		}
		else
		{
			for (int j = 0; j <= i; j++)
			{
				printf("1 ");
			}
			printf("\n");
		}
	}
	return 0;
}