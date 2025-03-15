#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate and print the sum of digits for each element in the array
    for (int i = 0; i < n; i++) {
        int sum = 0;
        int num = arr[i];

        // Calculate the sum of digits for the current number
        while (num != 0) {
            sum += num % 10;  // Add the last digit
            num /= 10;         // Remove the last digit
        }

        // Print the sum of digits for the current element
        printf("Sum of digits of %d: %d\n", arr[i], sum);
    }

    return 0;
}

