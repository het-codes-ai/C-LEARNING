#include<stdio.h>
int main(){
  for(int i=1;i<=5;i++){
    for(int s=1;s<=4;s++){
        printf("  ");
    }
    for(int j=1;j<=i;j++){
        printf("%d ",j);
    }

    printf("\n");

  }
 for(int i=5;i>=1;i--){
    if(i<5){
        for(int s=1;s<=5-i;s++){
            printf("  ");
        }
    }

    for(int j=i;j>=1;j--){
        printf("%d ",j);
    }


    printf("\n");

  }
}
