#include<stdio.h>
int main(){
	int nums[]={1,2,-3,-4,5,-6,7,8};
	for(int i=0;i<sizeof(nums)/sizeof(nums[i]);i++) {
		if(nums[i]<0){
		printf("%d\n",nums[i]);
		}
	}
	return 0;
	}