#include<stdio.h>
int main()
{
        int amount,rupees,paise,note500,note100,note10,coin1;
        printf("Enter your PAISE\n");
        scanf("%d",&amount);

        rupees=amount/100;
        paise=amount%100;

        printf("Rs %d\n",rupees);
        printf("Ps %d\n",paise);

        note500=rupees/500;
        rupees%=500;

        note100=rupees/100;
        rupees%=100;

        note10=rupees/10;
        rupees%=10;

        coin1=rupees/1;

        printf("500 rs notes : %d\n",note500);
        printf("100 rs notes : %d\n",note100);        
        printf("10 rs notes : %d\n",note10);        
        printf("1 rs coin : %d\n",coin1);
        printf("Paise : %d\n",paise);
        return 0;
        }