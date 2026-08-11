#include<stdio.h>
int main(){
	
	int nums[]={1,2,-3,-4,5,-6,7,8,9};
	int evencount=0,oddcount=0;
	for(int i=0;i<sizeof(nums)/sizeof(nums[i]);i++) {
	 if(nums[i]%2==0){
	 	evencount++;
	 	}
	 else{
	 	oddcount++;
	 	}
	}
	printf("Count of even nums is %d\n",evencount);
		printf("Count of odd nums is %d",oddcount);
	
	return 0;
	}