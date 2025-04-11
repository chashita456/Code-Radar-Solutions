#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j, k = 0;
    int isDuplicate;

    
    fgets(str, sizeof(str), stdin);

    // Loop through the string
    for (i = 0; str[i] != '\0'; i++) {
        isDuplicate = 0;

        // Check if this character has appeared before
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not duplicate, add it to result
        if (!isDuplicate) {
            result[k++] = str[i];
        }
    }

    // Null-terminate the result string
    result[k] = '\0';

    printf("%s", result);

    return 0;
}
