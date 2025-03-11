#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    
    // Step 1: Rearrange the array to place each number at its correct index.
    for (int i = 0; i < n; i++) {
        // Swap arr[i] and arr[arr[i] - 1] if arr[i] is between 1 and n
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            int temp = arr[i];
            arr[i] = arr[arr[i] - 1];
            arr[temp - 1] = temp;
        }
    }
    
    // Step 2: Find the first missing positive integer.
    int smallestMissing = n + 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            smallestMissing = i + 1;
            break;
        }
    }
    
    // Print the result
    printf("Smallest missing positive integer is: %d\n", smallestMissing);

    return 0;
}
