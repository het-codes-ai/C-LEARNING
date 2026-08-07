#include <stdio.h>
int main(){
int count=0,num;
printf("Enter your number \n");
scanf("%d",&num);
while(num>0){
    count++;
    num/=10;
}
printf("Digit count is %d",count);
return 0;
}
