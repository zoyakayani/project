#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool checkPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Number is divisible by 'i', hence not prime
        }
    }

    return true; // Number is prime
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the checkPrime function
    bool isPrime = checkPrime(number);

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

