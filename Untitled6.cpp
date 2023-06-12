#include <stdio.h>
#include <math.h>

// Function to calculate the square root of a number
double calculateSquareRoot(double num) {
    return sqrt(num);
}

int main() {
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    // Call the calculateSquareRoot function
    double squareRoot = calculateSquareRoot(number);

    printf("The square root of %.2lf is %.2lf\n", number, squareRoot);

    return 0;
}

