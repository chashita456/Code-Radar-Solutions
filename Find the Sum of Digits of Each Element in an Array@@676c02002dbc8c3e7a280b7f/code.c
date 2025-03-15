#include<stdio.h>

int main() {
    int a, n, digit, sum = 0;
    
    // Read the integer a and n
    scanf("%d", &a);
    scanf("%d", &n);
    
    // Declare the array with size n
    int arr[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate the sum of digits of a
    while (a != 0) {
        digit = a % 10;  // Get the last digit
        sum = sum + digit;  // Add it to sum
        a = a / 10;  // Remove the last digit
    }
    
    // Print the value in the array at index 'sum' (if valid)
    if (sum < n) {
        printf("%d", arr[sum]);
    } else {
        printf("Index out of bounds");
    }
    
    return 0;
}
