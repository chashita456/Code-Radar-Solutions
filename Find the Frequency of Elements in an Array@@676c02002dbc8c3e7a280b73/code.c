
#include <stdio.h>

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare an array of size n

    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // To count the frequency of each element
    int freq[n]; // Array to store frequencies of elements

    // Initialize all frequencies to 0
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    // Count the frequency of each element in the array
    for (int i = 0; i < n; i++) {
        if (freq[i] == 0) { // If the element is not counted yet
            int count = 1; // Start count from 1 for the current element
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) { // If arr[j] is the same as arr[i]
                    count++;
                    freq[j] = 1; // Mark arr[j] as counted
                }
            }
            // Output the element with its frequency
            for (int k = 0; k < count; k++) {
                printf("%d ", arr[i]);
            }
        }
    }

    printf("\n"); // For a newline after the output

    return 0;
}
