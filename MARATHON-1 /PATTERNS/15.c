#include<stdio.h>
int main(){
for(int i=0;i<5;i++){
        for(int s1=0;s1<4-i;s1++){
            printf("  ");
        }
        printf(" * ");
        for(int s2=1;s2<=i;s2++){
            printf("  ");
        }
        if(i>0){
        for(int s3=1;s3<=i-1;s3++){
            printf("  ");
        }
        printf(" * ");
        }

        printf("\n");

    }
        for(int i=3;i>=0;i--){
            for(int s1=0;s1<4-i;s1++){
                printf("  ");
            }
            printf(" * ");

            if(i>0){
                for(int j=0;j<=2*(i-1);j++){
                    printf("  ");
                }
                printf(" * ");
            }

            printf("\n");
        }
}

