#include <stdio.h>
int main()
{
        int fixed_charge,rate,units,bill;
        fixed_charge=20;
        rate=7;
        printf("Enter your units: ");
        scanf("%d",&units);
        bill=fixed_charge+(rate*units);
        printf("%d\n",bill);

}