#include<stdio.h>
#include<math.h>
int isPrime(int n){
        if(n<2){
                printf("Invalid number !!!\n");
                return 0;
                }
                int i=2;
                while(i<=sqrt(n)){
                        if(n%i==0){
                                return 0;
                                }
                        i++;
                        }
                return 1;
        }
int main(){
        int n;
        int sum=0;
        printf("Enter number : \n");
        scanf("%d",&n);
        printf("\n SUM OF PRIME NUMBERS BEFORE YOUR NUMBER IS : \n");
        for(int a=2;a<=n;a++){
                 if(isPrime(a)){
                 sum+=a;
                 }
                }
printf("%d\n",sum);
        }