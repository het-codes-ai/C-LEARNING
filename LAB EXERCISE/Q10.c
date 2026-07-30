#include <stdio.h>
#include<limits.h>
int main(){
	int maxint=INT_MAX;
	int overflow=maxint+1;
	
	printf("Max Int value is %d\n",maxint);
	printf("Overflow value is %d\n",overflow);
	}
	
//THIS HAPPENS BECAUSE WHEN BIMARY ADDITION OF MAX_INT AND 1 OCCUR , IT TURNS MSB FROM 0 TO 1 , MAKING IT NEGATIVE.