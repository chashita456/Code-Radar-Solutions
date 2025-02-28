#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    // Numbers less than or equal to 1 are not prime
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
    int numbers[] = {5, 2, 7, 10, 17, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Loop through each number, check if it's prime, and print the result
    for (int i = 0; i < size; i++) {
        printf("%d", is_prime(numbers[i]));
    }
    printf("\n");

    return 0;
}


