#include<stdio.h>

int main() {
    int n, sum, num;

    // Read the number of elements
    scanf("%d", &n);

    int arr[n];  // Declare an array of size 'n'

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Use 'i' to index the array
    }

    // Calculate and print the sum of digits for each element in the array
    for (int i = 0; i < n; i++) {
        num = arr[i];  // Use a separate variable 'num' for digit sum calculation
        sum = 0;

        // Calculate the sum of digits for arr[i]
        while (num != 0) {
            int digit = num % 10;  // Extract the last digit
            sum += digit;          // Add it to the sum
            num /= 10;             // Remove the last digit
        }

        // Print the sum of digits for the current element
        printf("%d",  sum);
    }

    return 0;
}


