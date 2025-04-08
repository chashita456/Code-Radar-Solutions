#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("All bits are 0. Trailing zeros: 32\n");
        return 0;
    }

    while ((num & 1) == 0) {  // Check LSB (least significant bit)
        count++;
        num = num >> 1;  // Right shift to check next bit
    }

    printf("%d\n", count);
    return 0;
}
