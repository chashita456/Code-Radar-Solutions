#include <stdio.h>

int main() {
    int num, flipped;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Use bitwise NOT (~) and mask it with 32-bit to avoid extra bits
    flipped = ~num & 0xFFFFFFFF;

    printf("Original number: %d\n", num);
    printf("Flipped bits (as decimal): %u\n", flipped);

    printf("Binary (flipped): ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (flipped >> i) & 1);
    }

    printf("\n");

    return 0;
}
