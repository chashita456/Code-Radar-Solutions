#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    // Check if the number is less than or equal to 1 (not prime)
    if (n <= 1) {
        return 0;
    }

    // Check divisibility from 2 to the square root of n
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  // n is divisible by i, so it's not prime
        }
    }

    return 1;  // n is prime if no divisors were found
}

int main() {
    int number;

    // Input the number to check
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

