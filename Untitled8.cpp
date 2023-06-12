#include <stdio.h>

// Function to calculate the GCD of two numbers
int calculateGCD(int num1, int num2) {
    int gcd;

    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

// Function to calculate the LCM of two numbers
int calculateLCM(int num1, int num2) {
    int gcd = calculateGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    return lcm;
}

int main() {
    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    // Call the calculateLCM function
    int lcm = calculateLCM(number1, number2);

    printf("The LCM of %d and %d is %d\n", number1, number2, lcm);

    return 0;
}

