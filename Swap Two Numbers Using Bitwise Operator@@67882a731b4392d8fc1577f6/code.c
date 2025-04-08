#include <stdio.h>

int main() {
    int a, b;

    
    scanf("%d %d", &a, &b);

    

    // Swap using XOR
    a = a ^ b;
    b = a ^ b;  // (a ^ b) ^ b = a
    a = a ^ b;  // (a ^ b) ^ a = b

    printf(" %d,  %d", a, b);

    return 0;
}
