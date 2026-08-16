#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	int n=8;
	int max1=arr[0];
	int max2=-1;
	for(int i=0;i<n;i++){
		if(arr[i]>max1) {
			max2=max1;
			max1=arr[i];
			}
		else if(arr[i]>max1 && arr[i]!=max1){
			max2=arr[i];	
			}				
		}
		printf("1st largest is %d\n",max1);
		printf("2nd largest is %d\n",max2);
		return 0;
	} 