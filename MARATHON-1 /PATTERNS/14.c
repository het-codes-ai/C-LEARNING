#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        for(int s1=0;s1<5-i;s1++){
            printf("_ ");
        }
        for(int j=i;j>=0;j--){
            printf("%d ",j);
        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }

return 0;
}

