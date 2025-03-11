#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    // Handle edge cases where the array has fewer than 3 elements
    if (n == 1) {
        return arr[0];  // Only one element, it is a peak by default
    }
    
    // Check the first element
    if (arr[0] >= arr[1]) {
        return arr[0];  // First element is a peak
    }

    // Check the last element
    if (arr[n - 1] >= arr[n - 2]) {
        return arr[n - 1];  // Last element is a peak
    }

    // Check the rest of the elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i];  // Found a peak
        }
    }

    return -1;  // No peak found
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int peak = findFirstPeak(arr, n);
    
    if (peak != -1) {
        printf("%d ", peak);
    } else {
        printf("-1");
    }
    
    return 0;
}
