#include<stdio.h>
int main(){
int n,sumeven=0,sumodd=0;
int i=0;
printf("Enter your number : \n");
scanf("%d",&n);
while(i<=n){
        if(i%2==0){
    sumeven+=i;
        }
    else{
        sumodd+=i;
    }
    i++;
}
printf("even sum = %d\n",sumeven);
printf("odd sum = %d\n",sumodd);

}
