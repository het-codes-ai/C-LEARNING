#include<stdio.h>
int main(){
	int sum=0;
	int nums[]={1,2,-3,-4,5,-6,7,8};
	for(int i=0;i<sizeof(nums)/sizeof(nums[i]);i++) {
		sum+=nums[i];
	}
	printf("sum is %d",sum);
	return 0;
	}