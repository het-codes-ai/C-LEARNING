#include <stdio.h>
int main(){
    int i=1,j,sum,n;
    printf("Enter your number \n");
    scanf("%d",&n);
    while(i<=n){
            sum=0;
        for(j=1;j<=i/2;j++){
            if(i%j==0){
                sum+=j;
            }
        }

        if(sum==i && i!=0){
            printf("%d\n",sum);


        }
        i++;

        }
    return 0;
}
