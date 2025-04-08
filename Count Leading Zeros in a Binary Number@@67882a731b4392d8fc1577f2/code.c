#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;

    
    scanf("%u", &num);  // unsigned to avoid issues with sign bit

    if (num == 0) {
        printf("All bits are 0. Leading zeros: 32\n");
        return 0;
    }

    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            break;  // Stop when we find the first 1
        } else {
            count++;
        }
    }

    printf(" %d\n", count);
    return 0;
}
