#include<stdio.h>
int main(){

    for (int i=0;i<=5;i++){

        for(int j=0;j<i;j++){
              char ch='A'+(j*7)%26;
            printf("%c ",ch);
            ch+=7;
        }
    printf("\n");
    }


return 0;
}

