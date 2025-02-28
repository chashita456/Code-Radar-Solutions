#include <stdio.h>

int checkPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }

    // Loop from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If divisible by i, it's not prime
        }
    }

    return 1; // If no divisors are found, it's prime
}

int main() {
    int number;

    // Ask for user input
    printf("Enter a positive number: ");
    scanf("%d", &number);

    // Call the checkPrime function and print the result
    if (checkPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
