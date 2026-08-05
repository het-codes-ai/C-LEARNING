#include <stdio.h>

int main() {
    char op;
    double num1, num2;
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch(op) {
        case '+': 
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2); 
            break;
        case '-': 
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2); 
            break;
        case '*': 
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2); 
            break;
        case '/': 
            switch(num2 == 0) {
                case 1: 
                    printf("Error! Division by zero.\n"); 
                    break;
                case 0: 
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2); 
                    break;
            }
            break;
        default: 
            printf("Invalid operator\n");
    }
    return 0;
}
