#include <stdio.h>

// Function to calculate the factorial of a number
int calculateFactorial(int num) {
    int factorial = 1;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the calculateFactorial function
    int factorial = calculateFactorial(number);

    printf("The factorial of %d is %d\n", number, factorial);

    return 0;
}

