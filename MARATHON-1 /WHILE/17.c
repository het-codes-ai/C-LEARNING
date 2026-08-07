#include<stdio.h>
int main(){
    int num,digit;
    int sum=0,prod=1;
    num=361;
    while(num>0){
        digit=num%10;
        sum+=digit;
        prod*=digit;
        num/=10;
    }
    printf("Sum of digits = %d\n",sum);
    printf("Product of digits = %d\n",prod);

return 0;
}
