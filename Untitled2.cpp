#include <stdio.h>

// Function to check if a number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the checkEvenOdd function
    checkEvenOdd(number);

    return 0;
}

