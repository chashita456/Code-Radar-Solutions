#include<stdio.h>

int main() {
    int a, prime, count = 0;
    scanf("%d", &a);
    int arr[a];

    // Input array elements
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    // Check each element for primality
    for(int i = 0; i < a; i++) {
        prime = 1; // Assume the element is prime

        if (arr[i] < 2) {
            prime = 0; // Numbers less than 2 are not prime
        } else {
            for(int j = 2; j * j <= arr[i]; j++) { // Check up to sqrt(arr[i])
                if (arr[i] % j == 0) {
                    prime = 0; // Not prime
                    break;
                }
            }
        }

        if (prime) {
            count++; // Increment count if prime
        }
    }

    printf("%d\n", count); // Output count of prime numbers
    return 0;
}

