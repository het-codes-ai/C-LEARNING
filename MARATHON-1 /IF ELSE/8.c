#include <stdio.h>

int main() {
    double previous_reading, current_reading, units, amount;

    printf("Enter previous meter reading: ");
    scanf("%lf", &previous_reading);
    printf("Enter current meter reading: ");
    scanf("%lf", &current_reading);

    units = current_reading - previous_reading;

    if (units < 0) {
        printf("Invalid readings: Current reading cannot be less than previous reading.\n");
        return 1;
    }

    amount = 100.0;

    if (units <= 50) {
        amount += units * 1.50;
    } else if (units <= 150) {
        amount += (50 * 1.50) + (units - 50) * 3.75;
    } else if (units <= 250) {
        amount += (50 * 1.50) + (100 * 3.75) + (units - 150) * 5.20;
    } else {
        amount += (50 * 1.50) + (100 * 3.75) + (100 * 5.20) + (units - 250) * 8.50;
        amount += amount * 0.20;
    }

    printf("Total units consumed: %.2f\n", units);
    printf("Total electricity bill amount: Rs. %.2f\n", amount);

    return 0;
}
