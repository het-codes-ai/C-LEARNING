#include<stdio.h>
int main(){
int i=1;
int n=10;
int num;
printf("enter your number \n");
scanf("%d",&num);
while(i<=n){
    printf("%d * %i = %d\n",num,i,num*i);
    i++;
}
}
