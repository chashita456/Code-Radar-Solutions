#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("No set bits. Result: 0\n");
        return 0;
    }

    result = num & (-num);  // Extract lowest set bit

    printf("%d\n", result);
    return 0;
}
