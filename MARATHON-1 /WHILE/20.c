#include<stdio.h>
int main(){
int num=121;
int org=num;
int rev=0;
int digit;
while(num>0){
    digit=num%10;
    rev=(rev*10)+digit;
    num/=10;
}

if(org==rev){
    printf("Number is a palindrome\n");

}
else{
    printf("Number is not a palindrome\n");
}
return 0;
}
