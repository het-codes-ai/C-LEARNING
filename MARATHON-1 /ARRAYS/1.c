#include<stdio.h>
int main(){
	int nums[]={1,2,3,4,5,6,7,8};
	for(int i=sizeof(nums)/sizeof(nums[i])-1;i>=0 ;i--){
		printf("%d\n",nums[i]);
		}
	return 0;
	}