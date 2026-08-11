#include<stdio.h>
int main(){
    int i,sp,j;
    for(i=1;i<=5;i++){
        for(sp=1;sp<=5-i;sp++){
            printf("_ ");
        }
        for(j=i;j>=1;j--){
            printf("%d ",j*j*j);
        }
    printf("\n");
    }

return 0;
}
