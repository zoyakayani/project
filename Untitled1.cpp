#include <stdio.h>

// Function to swap two numbers
void swapNumbers(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int number1, number2;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("Before swapping: \n");
    printf("Number 1 = %d\n", number1);
    printf("Number 2 = %d\n", number2);

    // Call the swapNumbers function
    swapNumbers(&number1, &number2);

    printf("After swapping: \n");
    printf("Number 1 = %d\n", number1);
    printf("Number 2 = %d\n", number2);

    return 0;
}

