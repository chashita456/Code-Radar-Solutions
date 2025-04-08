#include <stdio.h>

int main() {
    int num, n, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position to set (0-based index): ");
    scanf("%d", &n);

    result = num | (1 << n);  // Set the nth bit

    printf("Number after setting bit %d: %d\n", n, result);
    return 0;
}
