#include <stdio.h>

int main() {
    int size;

    // Take array size input
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Take array elements as input
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int visited[1000] = {0};  // Array to track visited elements (size 1000 for simplicity)

    // Find the first repeating number
    for (int i = 0; i < size; i++) {
        if (visited[arr[i]] == 1) {
            printf("The first repeating number is: %d\n", arr[i]);
            return 0;  // Exit the program as we found the first repeating number
        }
        visited[arr[i]] = 1;  // Mark the number as visited
    }

    printf("No repeating numbers found.\n");

    return 0;
}
