#include <stdio.h>

int main() {
    int num, n, result;

    
    scanf("%d", &num);

    
    scanf("%d", &n);

    result = num & ~(1 << n);  // Clear the nth bit

    printf("%d", result);

    return 0;
}
