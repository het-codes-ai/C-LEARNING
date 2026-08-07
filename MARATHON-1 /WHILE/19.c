#include<stdio.h>
int main(){
int num=12345;
int org=num;
int rev=0;
int digit;
while(num>0){
    digit=num%10;
    rev=(rev*10)+digit;
    num/=10;
}
printf("%d is the reverse number of %d\n",rev,org);

return 0;
}
