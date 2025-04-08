#include <stdio.h>

int main() {
    int num, n, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position to clear (0-based index): ");
    scanf("%d", &n);

    result = num & ~(1 << n);  // Clear the nth bit

    printf("%d", result);

    return 0;
}
