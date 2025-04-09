#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    int visited[100] = {0};

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (visited[i]) continue;  // Skip already counted characters
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
                visited[j] = 1;  // Mark this character as visited
            }
        }
    }

    printf("%d", count);
    return 0;
}
