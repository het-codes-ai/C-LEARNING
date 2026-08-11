#include<stdio.h>
int main(){
    int num=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",num);
           num++;
           if(num==5){
            num=0;
           }

        }
        printf("\n");
    }
return 0;
}
