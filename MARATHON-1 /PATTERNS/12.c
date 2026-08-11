#include<stdio.h>
int main(){
    char ch='A';
    int num=1;
   for(int i=1;i<=5;i++){
        for(int s=1;s<=5-i;s++){
            printf("_ ");
        }
    for (int j=5-i;j<5;j++){
        if(i%2==1){
            printf("%c ",ch);
        }

        else{
            printf("%d ",num);
        }

    }
    printf("\n");
    if(i%2==0){
            ch++;
        }

        else{
                num++;
        }
   }
return 0;
}
