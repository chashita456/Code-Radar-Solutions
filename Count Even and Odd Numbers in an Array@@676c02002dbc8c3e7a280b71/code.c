#include <stdio.h>

int main() {
    int n;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array of size 'n'
    int arr[n];

    // Ask the user to input the elements of the array
    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element into the array
    }

    int evenCount = 0, oddCount = 0;

    // Loop through the array and count even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;  // Increment even count if the number is even
        } else {
            oddCount++;   // Increment odd count if the number is odd
        }
    }

    // Print the results
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}

