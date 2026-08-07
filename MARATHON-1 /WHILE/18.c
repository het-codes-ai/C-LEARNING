#include<stdio.h>
int main(){
int num,digit,sum=0,fact;
num=145;
int orgnum=num;
while(num>0){
    digit=num%10;
    fact=1;
    for(int i=1;i<=digit;i++){
        fact*=i;
    }
    sum+=fact;
    num/=10;
}
if(sum==orgnum){
    printf("%d is a strong number\n",orgnum);
}
else{
    printf("Its not a strong number\n");

}
return 0;
}
