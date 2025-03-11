#include <stdio.h>

int main() {
    int n;

    // Read the size of the array
    
    scanf("%d", &n);

    int arr[n];  // Declare an array of size n

    // Read array elements from the user
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // To track which elements we've already printed
    int printed[n];  // Array to track printed elements, initialized to 0
    for (int i = 0; i < n; i++) {
        printed[i] = 0; // Initialize all elements of printed array to 0
    }

    // Iterate through the array to find frequency of each element
    for (int i = 0; i < n; i++) {
        if (printed[i] == 0) { // If the element hasn't been printed yet
            int count = 1;  // Start count from 1 for the current element
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {  // If arr[j] is the same as arr[i]
                    count++;
                    printed[j] = 1;  // Mark arr[j] as visited
                }
            }
            printf("%d  %d\n", arr[i], count);  // Print frequency of arr[i]
        }
    }

    return 0;
}
