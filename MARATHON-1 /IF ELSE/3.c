#include<stdio.h>
int main(){
	int ch;
	printf("Enter alphabet \n");
	ch=getchar(); 
	if(ch=='a' || ch=='e' ||ch=='o' ||ch=='i' ||ch=='u'){
		printf("It is a vowel");
		} 
	else{
		printf("It is a consonant");
		}
	return 0;	
	}