#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, root1, root2, real, imag;
    
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    switch(delta > 0) {
        case 1:
            root1 = (-b + sqrt(delta)) / (2 * a);
            root2 = (-b - sqrt(delta)) / (2 * a);
            printf("Two distinct real roots: %.2lf and %.2lf\n", root1, root2);
            break;
        case 0:
            switch(delta < 0) {
                case 1:
                    real = -b / (2 * a);
                    imag = sqrt(-delta) / (2 * a);
                    printf("Two complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", real, imag, real, imag);
                    break;
                case 0:
                    root1 = root2 = -b / (2 * a);
                    printf("Two equal real roots: %.2lf\n", root1);
                    break;
            }
            break;
    }
    return 0;
}
