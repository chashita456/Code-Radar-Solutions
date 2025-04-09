#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[100];

    // Read string and substring
    fgets(str, sizeof(str), stdin);
    fgets(substr, sizeof(substr), stdin);

    // Remove newline characters if present
    str[strcspn(str, "\n")] = '\0';
    substr[strcspn(substr, "\n")] = '\0';

    // Check if substring is found
    if (strstr(str, substr) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
