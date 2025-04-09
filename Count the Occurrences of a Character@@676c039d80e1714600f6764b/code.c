#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    int freq[256] = {0};  // To handle all ASCII characters

    scanf("%s", str);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Count characters that appear more than once
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
