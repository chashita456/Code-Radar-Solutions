#include <stdio.h>
#include <limits.h>  // For INT_MAX

int main() {
    int a;
    scanf("%d", &a);
    
    if (a < 2) {  // If array size is less than 2, no second smallest element exists
        printf("-1\n");
        return 0;
    }

    int arr[a];
    
    // Input array elements
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX, second_min = INT_MAX;

    // Find the smallest and second smallest elements
    for (int i = 0; i < a; i++) {
        if (arr[i] < min) {  
            second_min = min;  // Update second smallest before updating smallest
            min = arr[i];
        } else if (arr[i] > min && arr[i] < second_min) {  
            // Update second_min if arr[i] is distinct and smaller than second_min
            second_min = arr[i];
        }
    }

    // Check if second smallest was updated
    if (second_min == INT_MAX) {
        printf("-1\n");  // No second smallest element exists
    } else {
        printf("%d\n", second_min);
    }

    return 0;
}
