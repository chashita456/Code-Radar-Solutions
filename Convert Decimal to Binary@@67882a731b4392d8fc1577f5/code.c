#include <stdio.h>

int main() {
    int num;

   
    scanf("%d", &num);

    

    // Assuming 32-bit integer
    int started = 0;
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;  // Get the ith bit

        // Skip leading 0s (optional)
        if (bit == 1) started = 1;

        if (started)
            printf("%d", bit);
    }

    // If number was 0, print 0
    if (!started)
        printf("0");

    printf("\n");
    return 0;
}
