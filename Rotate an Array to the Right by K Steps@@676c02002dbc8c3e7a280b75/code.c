#include<stdio.h>

// Reverse function definition with void return type
void reverse(int arr[], int si, int ei) {
    for(int i = si, j = ei; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    int a, k;
    
    // Input number of elements and the value of k
    scanf("%d", &a);
    scanf("%d", &k);
    
    int arr[a];
    
    // Input the elements of the array
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Adjust k to handle cases where k > a
    k = k % a;
    
    // Reverse the entire array
    reverse(arr, 0, a - 1);
    
    // Reverse the first part
    reverse(arr, 0, k - 1);
    
    // Reverse the second part
    reverse(arr, k, a - 1);
    
    // Print the rotated array with a space between each element
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);  // Added space between elements for readability
    }
    printf("\n");  // Print a newline after the output
    
    return 0;
}
