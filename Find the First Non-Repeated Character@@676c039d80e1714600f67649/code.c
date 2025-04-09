#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        int flag = 0;
        
        // Compare with every other character
        for (int j = 0; str[j] != '\0'; j++) {
            if (i != j && str[i] == str[j]) {
                flag = 1;  // Found a duplicate
                break;
            }
        }

        if (flag == 0) {
            printf("%c", str[i]);
            return 0; // Done after first non-repeated character
        }
    }

    printf("-");
    return 0;
}
