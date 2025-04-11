#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int duplicate;

    fgets(str, sizeof(str), stdin);

    // To store result
    for (int i = 0; str[i] != '\0'; i++) {
        duplicate = 0;

        // Check if character already appeared before
        for (int j = 0; j<i; j++) {
            if (str[i] == str[j]) {
                duplicate = 1;
                break;
            }
        }

        // If not duplicate, print it
        if (duplicate == 0 && str[i] != '\n') {
            printf("%c", str[i]);
        }
    }

    return 0;
}
