#include <stdio.h>

// Function to calculate the power of a number
double calculatePower(double base, double exponent) {
    double result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    double base, exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    // Call the calculatePower function
    double power = calculatePower(base, exponent);

    printf("%.2lf raised to the power %.2lf is %.2lf\n", base, exponent, power);

    return 0;
}

