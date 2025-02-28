// Your code here..#include <stdio.h>

// Function to perform bubble sort and return the sorted array
void bubbleSort(int arr[], int n) {
    int temp;
    // Loop through all elements in the array
    for (int i = 0; i < n-1; i++) {
        // Compare adjacent elements and swap if needed
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call bubbleSort function to sort the array
    bubbleSort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
.