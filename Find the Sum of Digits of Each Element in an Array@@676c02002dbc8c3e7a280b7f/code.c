#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nSum of digits for each element:\n");
    for (int i = 0; i < n; i++) {
        int num = arr[i], digitSum = 0;

        while (num > 0) {
            digitSum += num % 10;  // Extract last digit and add to sum
            num /= 10;  // Remove last digit
        }

        printf("Sum of digits of %d = %d\n", arr[i], digitSum);
        
    }

    

    return 0;
}
