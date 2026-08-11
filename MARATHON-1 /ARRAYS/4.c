#include<stdio.h>
int main(){
	
	int nums[]={1,2,-3,-4,5,-6,7,8,9};
	int max=nums[0];
	for(int i=0;i<sizeof(nums)/sizeof(nums[i]);i++) {
	 if(nums[i]>=max){
	 	max=nums[i];
	 	}
	}
	printf("max is %d",max);
	return 0;
	}