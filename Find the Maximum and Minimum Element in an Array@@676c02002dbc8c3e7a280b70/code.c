#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a); // Input size of the array

    int arr[a];
    for (int i = 0; i < a; i++) { // Input elements of the array
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < a; i++) { // Find the max and min values
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    // Print the results once
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
