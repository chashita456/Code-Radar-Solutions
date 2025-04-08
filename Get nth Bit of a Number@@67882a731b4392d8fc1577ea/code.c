#include <stdio.h>

int main() {
    int num, n, bit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position to get (0-based index): ");
    scanf("%d", &n);

    bit = (num >> n) & 1;  // Extract the nth bit
    printf("%d", bit);


    

    return 0;
}
