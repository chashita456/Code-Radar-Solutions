#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap using XOR
    a = a ^ b;
    b = a ^ b;  // (a ^ b) ^ b = a
    a = a ^ b;  // (a ^ b) ^ a = b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
