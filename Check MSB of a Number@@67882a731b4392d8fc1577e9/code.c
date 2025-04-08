#include <stdio.h>

int main() {
    int num;
    int zeros = 0, ones = 0;

    printf("Enter a binary number (only 0s and 1s): ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;  // Get last digit

        if (digit == 0) {
            zeros++;
        } else if (digit == 1) {
            ones++;
        } else {
            printf("Invalid input! Only 0 and 1 are allowed.\n");
            return 1;
        }

        num = num / 10;  // Remove last digit
    }

    if (zeros > ones) {
        printf("Most Common Bit (MCB): 0\n");
    } else if (ones > zeros) {
        printf("Most Common Bit (MCB): 1\n");
    } else {
        printf("Equal number of 0s and 1s.\n");
    }

    return 0;
}
